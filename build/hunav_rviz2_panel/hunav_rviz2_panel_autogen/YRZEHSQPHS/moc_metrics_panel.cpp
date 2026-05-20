/****************************************************************************
** Meta object code from reading C++ file 'metrics_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/hunav_sim/hunav_rviz2_panel/include/headers/metrics_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'metrics_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hunav_rviz2_panel__MetricsPanel_t {
    QByteArrayData data[15];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hunav_rviz2_panel__MetricsPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hunav_rviz2_panel__MetricsPanel_t qt_meta_stringdata_hunav_rviz2_panel__MetricsPanel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "hunav_rviz2_panel::MetricsPanel"
QT_MOC_LITERAL(1, 32, 11), // "loadMetrics"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 22), // "metricsSelectionWindow"
QT_MOC_LITERAL(4, 68, 15), // "saveMetricsYaml"
QT_MOC_LITERAL(5, 84, 19), // "onSearchTextChanged"
QT_MOC_LITERAL(6, 104, 16), // "selectAllMetrics"
QT_MOC_LITERAL(7, 121, 18), // "deselectAllMetrics"
QT_MOC_LITERAL(8, 140, 14), // "toggleCategory"
QT_MOC_LITERAL(9, 155, 12), // "categoryName"
QT_MOC_LITERAL(10, 168, 16), // "categorizeMetric"
QT_MOC_LITERAL(11, 185, 10), // "metricName"
QT_MOC_LITERAL(12, 196, 16), // "formatMetricName"
QT_MOC_LITERAL(13, 213, 16), // "getMetricTooltip"
QT_MOC_LITERAL(14, 230, 17) // "updateStatusLabel"

    },
    "hunav_rviz2_panel::MetricsPanel\0"
    "loadMetrics\0\0metricsSelectionWindow\0"
    "saveMetricsYaml\0onSearchTextChanged\0"
    "selectAllMetrics\0deselectAllMetrics\0"
    "toggleCategory\0categoryName\0"
    "categorizeMetric\0metricName\0"
    "formatMetricName\0getMetricTooltip\0"
    "updateStatusLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hunav_rviz2_panel__MetricsPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x09 /* Protected */,
       3,    0,   70,    2, 0x09 /* Protected */,
       4,    0,   71,    2, 0x09 /* Protected */,
       5,    0,   72,    2, 0x09 /* Protected */,
       6,    0,   73,    2, 0x09 /* Protected */,
       7,    0,   74,    2, 0x09 /* Protected */,
       8,    1,   75,    2, 0x09 /* Protected */,
      10,    1,   78,    2, 0x09 /* Protected */,
      12,    1,   81,    2, 0x09 /* Protected */,
      13,    1,   84,    2, 0x09 /* Protected */,
      14,    0,   87,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::QString, QMetaType::QString,   11,
    QMetaType::QString, QMetaType::QString,   11,
    QMetaType::QString, QMetaType::QString,   11,
    QMetaType::Void,

       0        // eod
};

void hunav_rviz2_panel::MetricsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MetricsPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadMetrics(); break;
        case 1: _t->metricsSelectionWindow(); break;
        case 2: _t->saveMetricsYaml(); break;
        case 3: _t->onSearchTextChanged(); break;
        case 4: _t->selectAllMetrics(); break;
        case 5: _t->deselectAllMetrics(); break;
        case 6: _t->toggleCategory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: { QString _r = _t->categorizeMetric((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->formatMetricName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->getMetricTooltip((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->updateStatusLabel(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hunav_rviz2_panel::MetricsPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Panel::staticMetaObject>(),
    qt_meta_stringdata_hunav_rviz2_panel__MetricsPanel.data,
    qt_meta_data_hunav_rviz2_panel__MetricsPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *hunav_rviz2_panel::MetricsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hunav_rviz2_panel::MetricsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hunav_rviz2_panel__MetricsPanel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "rclcpp::Node"))
        return static_cast< rclcpp::Node*>(this);
    return rviz_common::Panel::qt_metacast(_clname);
}

int hunav_rviz2_panel::MetricsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
