/****************************************************************************
** Meta object code from reading C++ file 'cadastro.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RelatorioBase-master/cadastro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cadastro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cadastro_t {
    QByteArrayData data[16];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cadastro_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cadastro_t qt_meta_stringdata_Cadastro = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Cadastro"
QT_MOC_LITERAL(1, 9, 17), // "onbtFilialclicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 23), // "onbtDepartamentoclicked"
QT_MOC_LITERAL(4, 52, 20), // "onbtCategoriaclicked"
QT_MOC_LITERAL(5, 73, 17), // "onbtSalvarclicked"
QT_MOC_LITERAL(6, 91, 17), // "onbtLimparclicked"
QT_MOC_LITERAL(7, 109, 18), // "onlnFilialinformed"
QT_MOC_LITERAL(8, 128, 24), // "onlnDepartamentoinformed"
QT_MOC_LITERAL(9, 153, 21), // "onlnCategoriainformed"
QT_MOC_LITERAL(10, 175, 19), // "onlnProdutoinformed"
QT_MOC_LITERAL(11, 195, 9), // "chamaBase"
QT_MOC_LITERAL(12, 205, 16), // "onlnBaseinformed"
QT_MOC_LITERAL(13, 222, 12), // "validaString"
QT_MOC_LITERAL(14, 235, 1), // "s"
QT_MOC_LITERAL(15, 237, 17) // "VerificaSeENumero"

    },
    "Cadastro\0onbtFilialclicked\0\0"
    "onbtDepartamentoclicked\0onbtCategoriaclicked\0"
    "onbtSalvarclicked\0onbtLimparclicked\0"
    "onlnFilialinformed\0onlnDepartamentoinformed\0"
    "onlnCategoriainformed\0onlnProdutoinformed\0"
    "chamaBase\0onlnBaseinformed\0validaString\0"
    "s\0VerificaSeENumero"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cadastro[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      15,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   14,
    QMetaType::Bool, QMetaType::QString,   14,

       0        // eod
};

void Cadastro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cadastro *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onbtFilialclicked(); break;
        case 1: _t->onbtDepartamentoclicked(); break;
        case 2: _t->onbtCategoriaclicked(); break;
        case 3: _t->onbtSalvarclicked(); break;
        case 4: _t->onbtLimparclicked(); break;
        case 5: _t->onlnFilialinformed(); break;
        case 6: _t->onlnDepartamentoinformed(); break;
        case 7: _t->onlnCategoriainformed(); break;
        case 8: _t->onlnProdutoinformed(); break;
        case 9: _t->chamaBase(); break;
        case 10: _t->onlnBaseinformed(); break;
        case 11: { bool _r = _t->validaString((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->VerificaSeENumero((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cadastro::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Cadastro.data,
    qt_meta_data_Cadastro,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Cadastro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cadastro::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cadastro.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Cadastro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
