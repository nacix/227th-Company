#define MAINPREFIX x
#define PREFIX krt

#define TAG KRT
#define TAG_BR [##227th##]

#define TITLE 227th Krayt Company

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL
#define VERSION_AR  MAJOR,MINOR,PATCHLVL

#define REQUIRED_VERSION 1.88
#define REQUIRED_CBA_VERSION {3,8,0}

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(TITLE - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(TITLE - COMPONENT)
#endif