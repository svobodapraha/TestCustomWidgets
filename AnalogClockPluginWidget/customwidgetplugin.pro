QT          += widgets uiplugin

QTDIR_build {
# This is only for the Qt build. Do not use externally. We mean it.
PLUGIN_TYPE = designer
PLUGIN_CLASS_NAME = AnalogClockPlugin
load(qt_plugin)
CONFIG += install_ok
} else {
# Public example:

CONFIG      += plugin
TEMPLATE    = lib

TARGET = $$qtLibraryTarget($$TARGET)

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target

}

HEADERS     = analogclock.h \
              customwidgetplugin.h
SOURCES     = analogclock.cpp \
              customwidgetplugin.cpp
OTHER_FILES += analogclock.json
