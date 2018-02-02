// From:
// https://stackoverflow.com/questions/341520/how-to-use-libapt-or-libept-in-debian-like-system-to-list-packages-and-get-the?noredirect=1



#include <apt-pkg/cachefile.h>


int main() {


  // _config and _system are defined in the libapt header files
  pkgInitConfig(*_config);
  pkgInitSystem(*_config, _system);

  pkgCacheFile cache_file;
  pkgCache* cache = cache_file.GetPkgCache();

  for (pkgCache::PkgIterator package = cache->PkgBegin(); !package.end(); package++) {
    std::cout << package.Name() << std::endl;
  }

  return 0;
}
