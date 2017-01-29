// Generated by Haxe 3.4.0 (git build development @ 75c0f05)
#include <hxcpp.h>

#ifndef INCLUDED_stb_format_tools_Crc32
#include <stb/format/tools/Crc32.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_827c084616f31f16_13_init,"stb.format.tools.Crc32","init",0x697c0cc8,"stb.format.tools.Crc32.init","stb/format/tools/Crc32.hx",13,0x37ae21e9)
HX_DEFINE_STACK_FRAME(_hx_pos_827c084616f31f16_30_update,"stb.format.tools.Crc32","update",0xb9e835c1,"stb.format.tools.Crc32.update","stb/format/tools/Crc32.hx",30,0x37ae21e9)
HX_DEFINE_STACK_FRAME(_hx_pos_827c084616f31f16_10_boot,"stb.format.tools.Crc32","boot",0x64dc55ea,"stb.format.tools.Crc32.boot","stb/format/tools/Crc32.hx",10,0x37ae21e9)
namespace stb{
namespace format{
namespace tools{

void Crc32_obj::__construct() { }

Dynamic Crc32_obj::__CreateEmpty() { return new Crc32_obj; }

void *Crc32_obj::_hx_vtable = 0;

Dynamic Crc32_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Crc32_obj > _hx_result = new Crc32_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Crc32_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x63f3444c;
}

int Crc32_obj::POLY;

::Array< int > Crc32_obj::table;

void Crc32_obj::init(){
            	HX_STACKFRAME(&_hx_pos_827c084616f31f16_13_init)
HXLINE(  14)		if (hx::IsNotNull( ::stb::format::tools::Crc32_obj::table )) {
HXLINE(  15)			return;
            		}
HXLINE(  18)		::stb::format::tools::Crc32_obj::table = ::Array_obj< int >::__new((int)256);
HXLINE(  19)		{
HXLINE(  19)			HX_VARI( int,_g) = (int)0;
HXDLIN(  19)			while((_g < (int)256)){
HXLINE(  19)				_g = (_g + (int)1);
HXDLIN(  19)				HX_VARI( int,i) = (_g - (int)1);
HXLINE(  20)				HX_VARI( int,s) = ((int)i << (int)(int)24);
HXLINE(  21)				{
HXLINE(  21)					HX_VARI( int,_g1) = (int)0;
HXDLIN(  21)					while((_g1 < (int)8)){
HXLINE(  21)						_g1 = (_g1 + (int)1);
HXLINE(  22)						int s1;
HXDLIN(  22)						HX_VARI( bool,aNeg) = (s < (int)0);
HXDLIN(  22)						bool s2;
HXDLIN(  22)						if ((aNeg != true)) {
HXLINE(  22)							s2 = aNeg;
            						}
            						else {
HXLINE(  22)							s2 = (s >= ((int)(int)1 << (int)(int)31));
            						}
HXDLIN(  22)						if (s2) {
HXLINE(  22)							s1 = (int)79764919;
            						}
            						else {
HXLINE(  22)							s1 = (int)0;
            						}
HXDLIN(  22)						s = ((int)((int)s << (int)(int)1) ^ (int)s1);
            					}
            				}
HXLINE(  24)				::stb::format::tools::Crc32_obj::table->__unsafe_set(i,s);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Crc32_obj,init,(void))

int Crc32_obj::update(int crc,int byte){
            	HX_STACKFRAME(&_hx_pos_827c084616f31f16_30_update)
            	HX_STACK_ARG(crc,"crc")
            	HX_STACK_ARG(byte,"byte")
HXLINE(  30)		return ((int)((int)crc << (int)(int)8) ^ (int)( (int)(_hx_array_unsafe_get(::stb::format::tools::Crc32_obj::table,((int)byte ^ (int)hx::UShr(crc,(int)24)))) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Crc32_obj,update,return )


Crc32_obj::Crc32_obj()
{
}

bool Crc32_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"table") ) { outValue = table; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true; }
	}
	return false;
}

bool Crc32_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"table") ) { table=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Crc32_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Crc32_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Crc32_obj::POLY,HX_HCSTRING("POLY","\x4c","\x46","\x1d","\x35")},
	{hx::fsObject /*Array< int >*/ ,(void *) &Crc32_obj::table,HX_HCSTRING("table","\x0e","\xb8","\xe3","\x0a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Crc32_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Crc32_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Crc32_obj::POLY,"POLY");
	HX_MARK_MEMBER_NAME(Crc32_obj::table,"table");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Crc32_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Crc32_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Crc32_obj::POLY,"POLY");
	HX_VISIT_MEMBER_NAME(Crc32_obj::table,"table");
};

#endif

hx::Class Crc32_obj::__mClass;

static ::String Crc32_obj_sStaticFields[] = {
	HX_HCSTRING("POLY","\x4c","\x46","\x1d","\x35"),
	HX_HCSTRING("table","\x0e","\xb8","\xe3","\x0a"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null())
};

void Crc32_obj::__register()
{
	hx::Object *dummy = new Crc32_obj;
	Crc32_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("stb.format.tools.Crc32","\xb6","\xe9","\x34","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Crc32_obj::__GetStatic;
	__mClass->mSetStaticField = &Crc32_obj::__SetStatic;
	__mClass->mMarkFunc = Crc32_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Crc32_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Crc32_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Crc32_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Crc32_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Crc32_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Crc32_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_827c084616f31f16_10_boot)
HXLINE(  10)		POLY = (int)79764919;
            	}
}

} // end namespace stb
} // end namespace format
} // end namespace tools
