/****************************************************************************
** Meta object code from reading C++ file 'actor_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/hunav_sim/hunav_rviz2_panel/include/headers/actor_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actor_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hunav_rviz2_panel__ActorPanel_t {
    QByteArrayData data[58];
    char stringdata0[810];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hunav_rviz2_panel__ActorPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hunav_rviz2_panel__ActorPanel_t qt_meta_stringdata_hunav_rviz2_panel__ActorPanel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "hunav_rviz2_panel::ActorPanel"
QT_MOC_LITERAL(1, 30, 8), // "setTopic"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "topic"
QT_MOC_LITERAL(4, 46, 8), // "addAgent"
QT_MOC_LITERAL(5, 55, 10), // "onAddAgent"
QT_MOC_LITERAL(6, 66, 18), // "saveAndGenerateAll"
QT_MOC_LITERAL(7, 85, 20), // "onCreateOrEditAgents"
QT_MOC_LITERAL(8, 106, 10), // "resetPanel"
QT_MOC_LITERAL(9, 117, 13), // "onInitialPose"
QT_MOC_LITERAL(10, 131, 1), // "x"
QT_MOC_LITERAL(11, 133, 1), // "y"
QT_MOC_LITERAL(12, 135, 5), // "theta"
QT_MOC_LITERAL(13, 141, 5), // "frame"
QT_MOC_LITERAL(14, 147, 14), // "setInitialPose"
QT_MOC_LITERAL(15, 162, 22), // "closeInitialPoseWindow"
QT_MOC_LITERAL(16, 185, 22), // "onEnterGoalPickingMode"
QT_MOC_LITERAL(17, 208, 20), // "onAssignGoalsClicked"
QT_MOC_LITERAL(18, 229, 12), // "onGoalPicked"
QT_MOC_LITERAL(19, 242, 43), // "geometry_msgs::msg::PointStam..."
QT_MOC_LITERAL(20, 286, 3), // "msg"
QT_MOC_LITERAL(21, 290, 18), // "onResetLoadedGoals"
QT_MOC_LITERAL(22, 309, 21), // "rebuildGoalListWidget"
QT_MOC_LITERAL(23, 331, 13), // "checkComboBox"
QT_MOC_LITERAL(24, 345, 17), // "checkComboBoxSkin"
QT_MOC_LITERAL(25, 363, 17), // "checkComboBoxConf"
QT_MOC_LITERAL(26, 381, 15), // "checkParserSkin"
QT_MOC_LITERAL(27, 397, 4), // "skin"
QT_MOC_LITERAL(28, 402, 18), // "switchButtonLayout"
QT_MOC_LITERAL(29, 421, 9), // "PanelMode"
QT_MOC_LITERAL(30, 431, 4), // "mode"
QT_MOC_LITERAL(31, 436, 9), // "parseYaml"
QT_MOC_LITERAL(32, 446, 16), // "openFileExplorer"
QT_MOC_LITERAL(33, 463, 11), // "std::string"
QT_MOC_LITERAL(34, 475, 4), // "file"
QT_MOC_LITERAL(35, 480, 11), // "onSelectMap"
QT_MOC_LITERAL(36, 492, 9), // "randomRGB"
QT_MOC_LITERAL(37, 502, 12), // "createMarker"
QT_MOC_LITERAL(38, 515, 31), // "visualization_msgs::msg::Marker"
QT_MOC_LITERAL(39, 547, 8), // "point1_x"
QT_MOC_LITERAL(40, 556, 8), // "point1_y"
QT_MOC_LITERAL(41, 565, 3), // "ids"
QT_MOC_LITERAL(42, 569, 12), // "marker_shape"
QT_MOC_LITERAL(43, 582, 16), // "create_or_parser"
QT_MOC_LITERAL(44, 599, 17), // "createArrowMarker"
QT_MOC_LITERAL(45, 617, 8), // "point2_x"
QT_MOC_LITERAL(46, 626, 8), // "point2_y"
QT_MOC_LITERAL(47, 635, 16), // "createAgentLabel"
QT_MOC_LITERAL(48, 652, 2), // "id"
QT_MOC_LITERAL(49, 655, 8), // "frame_id"
QT_MOC_LITERAL(50, 664, 20), // "removeCurrentMarkers"
QT_MOC_LITERAL(51, 685, 20), // "clearNonAgentMarkers"
QT_MOC_LITERAL(52, 706, 15), // "initAgentColors"
QT_MOC_LITERAL(53, 722, 10), // "num_agents"
QT_MOC_LITERAL(54, 733, 21), // "resetGoalMarkerColors"
QT_MOC_LITERAL(55, 755, 19), // "publishAgentMarkers"
QT_MOC_LITERAL(56, 775, 17), // "clearDisplayedMap"
QT_MOC_LITERAL(57, 793, 16) // "onEditAllInGroot"

    },
    "hunav_rviz2_panel::ActorPanel\0setTopic\0"
    "\0topic\0addAgent\0onAddAgent\0"
    "saveAndGenerateAll\0onCreateOrEditAgents\0"
    "resetPanel\0onInitialPose\0x\0y\0theta\0"
    "frame\0setInitialPose\0closeInitialPoseWindow\0"
    "onEnterGoalPickingMode\0onAssignGoalsClicked\0"
    "onGoalPicked\0geometry_msgs::msg::PointStamped::SharedPtr\0"
    "msg\0onResetLoadedGoals\0rebuildGoalListWidget\0"
    "checkComboBox\0checkComboBoxSkin\0"
    "checkComboBoxConf\0checkParserSkin\0"
    "skin\0switchButtonLayout\0PanelMode\0"
    "mode\0parseYaml\0openFileExplorer\0"
    "std::string\0file\0onSelectMap\0randomRGB\0"
    "createMarker\0visualization_msgs::msg::Marker\0"
    "point1_x\0point1_y\0ids\0marker_shape\0"
    "create_or_parser\0createArrowMarker\0"
    "point2_x\0point2_y\0createAgentLabel\0"
    "id\0frame_id\0removeCurrentMarkers\0"
    "clearNonAgentMarkers\0initAgentColors\0"
    "num_agents\0resetGoalMarkerColors\0"
    "publishAgentMarkers\0clearDisplayedMap\0"
    "onEditAllInGroot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hunav_rviz2_panel__ActorPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  179,    2, 0x0a /* Public */,
       4,    0,  182,    2, 0x09 /* Protected */,
       5,    0,  183,    2, 0x09 /* Protected */,
       6,    0,  184,    2, 0x09 /* Protected */,
       7,    0,  185,    2, 0x09 /* Protected */,
       8,    0,  186,    2, 0x09 /* Protected */,
       9,    4,  187,    2, 0x09 /* Protected */,
      14,    0,  196,    2, 0x09 /* Protected */,
      15,    0,  197,    2, 0x09 /* Protected */,
      16,    0,  198,    2, 0x09 /* Protected */,
      17,    0,  199,    2, 0x09 /* Protected */,
      18,    1,  200,    2, 0x09 /* Protected */,
      21,    0,  203,    2, 0x09 /* Protected */,
      22,    0,  204,    2, 0x09 /* Protected */,
      23,    0,  205,    2, 0x09 /* Protected */,
      24,    0,  206,    2, 0x09 /* Protected */,
      25,    0,  207,    2, 0x09 /* Protected */,
      26,    1,  208,    2, 0x09 /* Protected */,
      28,    1,  211,    2, 0x09 /* Protected */,
      31,    0,  214,    2, 0x09 /* Protected */,
      32,    1,  215,    2, 0x09 /* Protected */,
      35,    0,  218,    2, 0x09 /* Protected */,
      36,    0,  219,    2, 0x09 /* Protected */,
      37,    5,  220,    2, 0x09 /* Protected */,
      44,    5,  231,    2, 0x09 /* Protected */,
      47,    4,  242,    2, 0x09 /* Protected */,
      50,    0,  251,    2, 0x09 /* Protected */,
      51,    0,  252,    2, 0x09 /* Protected */,
      52,    1,  253,    2, 0x09 /* Protected */,
      54,    0,  256,    2, 0x09 /* Protected */,
      55,    0,  257,    2, 0x09 /* Protected */,
      56,    0,  258,    2, 0x09 /* Protected */,
      57,    0,  259,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::QString,   10,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,
    0x80000000 | 33, QMetaType::Bool,   34,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 38, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 33, 0x80000000 | 33,   39,   40,   41,   42,   43,
    0x80000000 | 38, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   39,   40,   45,   46,   41,
    0x80000000 | 38, QMetaType::Double, QMetaType::Double, QMetaType::Int, 0x80000000 | 33,   10,   11,   48,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void hunav_rviz2_panel::ActorPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActorPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setTopic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->addAgent(); break;
        case 2: _t->onAddAgent(); break;
        case 3: _t->saveAndGenerateAll(); break;
        case 4: _t->onCreateOrEditAgents(); break;
        case 5: _t->resetPanel(); break;
        case 6: _t->onInitialPose((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 7: _t->setInitialPose(); break;
        case 8: _t->closeInitialPoseWindow(); break;
        case 9: _t->onEnterGoalPickingMode(); break;
        case 10: _t->onAssignGoalsClicked(); break;
        case 11: _t->onGoalPicked((*reinterpret_cast< const geometry_msgs::msg::PointStamped::SharedPtr(*)>(_a[1]))); break;
        case 12: _t->onResetLoadedGoals(); break;
        case 13: _t->rebuildGoalListWidget(); break;
        case 14: { int _r = _t->checkComboBox();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->checkComboBoxSkin();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->checkComboBoxConf(); break;
        case 17: _t->checkParserSkin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->switchButtonLayout((*reinterpret_cast< PanelMode(*)>(_a[1]))); break;
        case 19: _t->parseYaml(); break;
        case 20: { std::string _r = _t->openFileExplorer((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->onSelectMap(); break;
        case 22: _t->randomRGB(); break;
        case 23: { visualization_msgs::msg::Marker _r = _t->createMarker((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< std::string(*)>(_a[4])),(*reinterpret_cast< std::string(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< visualization_msgs::msg::Marker*>(_a[0]) = std::move(_r); }  break;
        case 24: { visualization_msgs::msg::Marker _r = _t->createArrowMarker((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< visualization_msgs::msg::Marker*>(_a[0]) = std::move(_r); }  break;
        case 25: { visualization_msgs::msg::Marker _r = _t->createAgentLabel((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const std::string(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< visualization_msgs::msg::Marker*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->removeCurrentMarkers(); break;
        case 27: _t->clearNonAgentMarkers(); break;
        case 28: _t->initAgentColors((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->resetGoalMarkerColors(); break;
        case 30: _t->publishAgentMarkers(); break;
        case 31: _t->clearDisplayedMap(); break;
        case 32: _t->onEditAllInGroot(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hunav_rviz2_panel::ActorPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Panel::staticMetaObject>(),
    qt_meta_stringdata_hunav_rviz2_panel__ActorPanel.data,
    qt_meta_data_hunav_rviz2_panel__ActorPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *hunav_rviz2_panel::ActorPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hunav_rviz2_panel::ActorPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hunav_rviz2_panel__ActorPanel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "rclcpp::Node"))
        return static_cast< rclcpp::Node*>(this);
    return rviz_common::Panel::qt_metacast(_clname);
}

int hunav_rviz2_panel::ActorPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 33;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
