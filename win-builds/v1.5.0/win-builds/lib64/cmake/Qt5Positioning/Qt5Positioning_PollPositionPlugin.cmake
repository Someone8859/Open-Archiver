
add_library(Qt5::PollPositionPlugin MODULE IMPORTED)

_populate_Positioning_plugin_properties(PollPositionPlugin RELEASE "position/qtposition_positionpoll.dll")

list(APPEND Qt5Positioning_PLUGINS Qt5::PollPositionPlugin)
