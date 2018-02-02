// Adapted from from:
// https://stackoverflow.com/questions/341520/how-to-use-libapt-or-libept-in-debian-like-system-to-list-packages-and-get-the?noredirect=1


#include <apt-pkg/cachefile.h>


int main()
{
  pkgInitConfig(*_config);
  pkgInitSystem(*_config, _system);

  pkgCache* pkg_cache = NULL;
  pkgDepCache* dep_cache = NULL;
  pkgCacheFile cache_file;

  pkg_cache = cache_file.GetPkgCache();
  dep_cache = cache_file.GetDepCache();

  for (pkgCache::PkgIterator package = pkg_cache->PkgBegin(); !package.end(); package++)
  {
    pkgDepCache::StateCache &state = (*dep_cache)[package];
    
    if(package.CurrentVer() && state.Upgradable())
    {
      std::cout << package.Name() << std::endl;
    }
  }

  return 0;
}
