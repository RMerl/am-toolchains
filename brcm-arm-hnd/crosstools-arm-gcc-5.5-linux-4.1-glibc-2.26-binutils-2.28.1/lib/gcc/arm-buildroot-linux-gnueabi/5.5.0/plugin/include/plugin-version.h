#include "configargs.h"

#define GCCPLUGIN_VERSION_MAJOR   5
#define GCCPLUGIN_VERSION_MINOR   5
#define GCCPLUGIN_VERSION_PATCHLEVEL   0
#define GCCPLUGIN_VERSION  (GCCPLUGIN_VERSION_MAJOR*1000 + GCCPLUGIN_VERSION_MINOR)

static char basever[] = "5.5.0";
static char datestamp[] = "20171010";
static char devphase[] = "";
static char revision[] = "";

/* FIXME plugins: We should make the version information more precise.
   One way to do is to add a checksum. */

static struct plugin_gcc_version gcc_version = {basever, datestamp,
						devphase, revision,
						configuration_arguments};
