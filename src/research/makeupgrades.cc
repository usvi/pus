// Adapted from from:
// https://stackoverflow.com/questions/341520/how-to-use-libapt-or-libept-in-debian-like-system-to-list-packages-and-get-the?noredirect=1


#include <apt-pkg/cachefile.h>
#include <apt-pkg/upgrade.h>

int main()
{

  pkgInitConfig(*_config);
  pkgInitSystem(*_config, _system);

  pkgCacheFile cache_file;
  pkgDepCache* dep_cache = cache_file.GetDepCache();

  APT::Upgrade::Upgrade(*dep_cache,
  			APT::Upgrade::FORBID_REMOVE_PACKAGES|APT::Upgrade::FORBID_INSTALL_NEW_PACKAGES);

  return 0;
}
