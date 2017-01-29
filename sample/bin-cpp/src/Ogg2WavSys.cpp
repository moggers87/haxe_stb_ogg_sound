// Generated by Haxe 3.4.0 (git build development @ 75c0f05)
#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Ogg2WavSys
#include <Ogg2WavSys.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_stb_format_vorbis_Reader
#include <stb/format/vorbis/Reader.h>
#endif
#ifndef INCLUDED_stb_format_vorbis_data_Comment
#include <stb/format/vorbis/data/Comment.h>
#endif
#ifndef INCLUDED_stb_format_vorbis_data_Header
#include <stb/format/vorbis/data/Header.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c3d1e793e0581dd5_12_main,"Ogg2WavSys","main",0x0b1c8c23,"Ogg2WavSys.main","Ogg2WavSys.hx",12,0x10c3007a)
HX_DEFINE_STACK_FRAME(_hx_pos_c3d1e793e0581dd5_78_lapTime,"Ogg2WavSys","lapTime",0x3cbe845e,"Ogg2WavSys.lapTime","Ogg2WavSys.hx",78,0x10c3007a)
HX_DEFINE_STACK_FRAME(_hx_pos_c3d1e793e0581dd5_89_boot,"Ogg2WavSys","boot",0x03e1d81c,"Ogg2WavSys.boot","Ogg2WavSys.hx",89,0x10c3007a)

void Ogg2WavSys_obj::__construct() { }

Dynamic Ogg2WavSys_obj::__CreateEmpty() { return new Ogg2WavSys_obj; }

void *Ogg2WavSys_obj::_hx_vtable = 0;

Dynamic Ogg2WavSys_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Ogg2WavSys_obj > _hx_result = new Ogg2WavSys_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Ogg2WavSys_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x49c294c4;
}

void Ogg2WavSys_obj::main(){
            	HX_STACKFRAME(&_hx_pos_c3d1e793e0581dd5_12_main)
HXLINE(  12)		HX_VARI( int,_g) = (int)0;
HXDLIN(  12)		HX_VARI( ::Array< ::String >,_g1) = ::sys::FileSystem_obj::readDirectory(HX_("sample/sound",ea,5d,6a,5b));
HXDLIN(  12)		while((_g < _g1->length)){
HXLINE(  12)			HX_VARI( ::String,file) = _g1->__get(_g);
HXDLIN(  12)			_g = (_g + (int)1);
HXLINE(  13)			if ((file.substr((file.length - (int)4),null()) != HX_(".ogg",e1,64,bc,1e))) {
HXLINE(  14)				continue;
            			}
HXLINE(  17)			HX_VARI( ::String,inPath) = ((HX_("sample/sound",ea,5d,6a,5b) + HX_("/",2f,00,00,00)) + file);
HXLINE(  18)			if (::sys::FileSystem_obj::isDirectory(inPath)) {
HXLINE(  19)				continue;
            			}
HXLINE(  22)			HX_VARI( ::String,outPath) = (((HX_("sample/sound",ea,5d,6a,5b) + HX_("/wav/",32,a9,c7,5e)) + ::Ogg2WavSys_obj::platform) + HX_("-",2d,00,00,00));
HXDLIN(  22)			HX_VARI_NAME( ::String,outPath1,"outPath") = ((outPath + file.substr((int)0,(file.length - (int)4))) + HX_(".wav",be,71,c2,1e));
HXLINE(  24)			::Sys_obj::println((HX_("File Name : ",b7,ab,39,ce) + inPath));
HXLINE(  26)			::Date_obj::now();
HXLINE(  27)			HX_VARI(  ::stb::format::vorbis::Reader,reader) = ::stb::format::vorbis::Reader_obj::openFromFile(inPath);
HXLINE(  28)			HX_VARI(  ::stb::format::vorbis::data::Header,header) = reader->get_header();
HXLINE(  30)			HX_VARI_NAME( int,_hx_int,"int") = ((header->channel * header->sampleRate) * (int)16);
HXDLIN(  30)			Float byteRate;
HXDLIN(  30)			if ((_hx_int < (int)0)) {
HXLINE(  30)				byteRate = (((Float)4294967296.0) + _hx_int);
            			}
            			else {
HXLINE(  30)				byteRate = (_hx_int + ((Float)0.0));
            			}
HXDLIN(  30)			HX_VARI_NAME( int,byteRate1,"byteRate") = ::Std_obj::_hx_int(((Float)byteRate / (Float)((Float)8.)));
HXLINE(  31)			HX_VARI( int,blockAlign) = ::Std_obj::_hx_int(((Float)(header->channel * (int)16) / (Float)(int)8));
HXLINE(  32)			HX_VARI( int,dataLength) = ((reader->get_totalSample() * header->channel) * (int)2);
HXLINE(  34)			::Sys_obj::println((HX_("Channel : ",03,1a,1c,fa) + header->channel));
HXLINE(  35)			int this1 = header->sampleRate;
HXDLIN(  35)			Float _hx_tmp;
HXDLIN(  35)			if ((this1 < (int)0)) {
HXLINE(  35)				_hx_tmp = (((Float)4294967296.0) + this1);
            			}
            			else {
HXLINE(  35)				_hx_tmp = (this1 + ((Float)0.0));
            			}
HXDLIN(  35)			::Sys_obj::println((HX_("Sample Rate : ",f0,cd,bd,92) + ::Std_obj::string(_hx_tmp)));
HXLINE(  36)			::Sys_obj::println((HX_("Sample : ",bc,f0,1f,ff) + reader->get_totalSample()));
HXLINE(  37)			::Sys_obj::println(((HX_("Time : ",b9,1c,0c,a6) + ::Std_obj::_hx_int(((Float)reader->get_totalMillisecond() / (Float)(int)1000))) + HX_("sec",91,9b,57,00)));
HXLINE(  39)			::Sys_obj::println((HX_("Vendor : ",1e,9a,d6,7c) + header->vendor));
HXLINE(  41)			HX_VARI(  ::haxe::ds::StringMap,commentData) = header->comment->data;
HXLINE(  42)			{
HXLINE(  42)				HX_VARI(  ::Dynamic,key) = commentData->keys();
HXDLIN(  42)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  42)					HX_VARI_NAME( ::String,key1,"key") = ( (::String)(key->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  43)					HX_VARI( int,_g2) = (int)0;
HXDLIN(  43)					HX_VARI( ::Array< ::String >,_g3) = ( (::Array< ::String >)(commentData->get(key1)) );
HXDLIN(  43)					while((_g2 < _g3->length)){
HXLINE(  43)						HX_VARI( ::String,value) = _g3->__get(_g2);
HXDLIN(  43)						_g2 = (_g2 + (int)1);
HXLINE(  44)						::Sys_obj::println(((key1.toUpperCase() + HX_("=",3d,00,00,00)) + value));
            					}
            				}
            			}
HXLINE(  49)			HX_VARI(  ::sys::io::FileOutput,output) = ::sys::io::File_obj::write(outPath1,null());
HXLINE(  50)			output->set_bigEndian(false);
HXLINE(  51)			output->writeString(HX_("RIFF",b7,20,6b,36));
HXLINE(  52)			output->writeInt32(((int)36 + dataLength));
HXLINE(  53)			output->writeString(HX_("WAVEfmt ",6c,dc,2d,60));
HXLINE(  54)			output->writeInt32((int)16);
HXLINE(  55)			output->writeUInt16((int)1);
HXLINE(  56)			output->writeUInt16(header->channel);
HXLINE(  57)			output->writeInt32(header->sampleRate);
HXLINE(  58)			output->writeInt32(byteRate1);
HXLINE(  59)			output->writeUInt16(blockAlign);
HXLINE(  60)			output->writeUInt16((int)16);
HXLINE(  61)			output->writeString(HX_("data",2a,56,63,42));
HXLINE(  62)			output->writeInt32(dataLength);
HXLINE(  64)			while(true){
HXLINE(  65)				HX_VARI( Float,time) = ::Date_obj::now()->getTime();
HXLINE(  66)				HX_VARI( int,n) = reader->read(output,(int)500000,null(),null(),null());
HXLINE(  67)				::String _hx_tmp1 = ((((HX_("",00,00,00,00) + reader->get_currentSample()) + HX_("/",2f,00,00,00)) + reader->get_totalSample()) + HX_(" : Decode Time ",c7,06,56,c3));
HXDLIN(  67)				::Sys_obj::println((_hx_tmp1 + ::Ogg2WavSys_obj::lapTime(time)));
HXLINE(  68)				if ((n == (int)0)) {
HXLINE(  68)					goto _hx_goto_3;
            				}
            			}
            			_hx_goto_3:;
HXLINE(  71)			output->flush();
HXLINE(  72)			output->close();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ogg2WavSys_obj,main,(void))

::String Ogg2WavSys_obj::lapTime(Float time){
            	HX_STACKFRAME(&_hx_pos_c3d1e793e0581dd5_78_lapTime)
            	HX_STACK_ARG(time,"time")
HXLINE(  78)		return (::Std_obj::_hx_int((::Date_obj::now()->getTime() - time)) + HX_("ms",66,5f,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ogg2WavSys_obj,lapTime,return )

::String Ogg2WavSys_obj::platform;


Ogg2WavSys_obj::Ogg2WavSys_obj()
{
}

bool Ogg2WavSys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lapTime") ) { outValue = lapTime_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { outValue = platform; return true; }
	}
	return false;
}

bool Ogg2WavSys_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { platform=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Ogg2WavSys_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Ogg2WavSys_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Ogg2WavSys_obj::platform,HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Ogg2WavSys_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ogg2WavSys_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Ogg2WavSys_obj::platform,"platform");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Ogg2WavSys_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ogg2WavSys_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Ogg2WavSys_obj::platform,"platform");
};

#endif

hx::Class Ogg2WavSys_obj::__mClass;

static ::String Ogg2WavSys_obj_sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	HX_HCSTRING("lapTime","\x08","\x0a","\x63","\x08"),
	HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"),
	::String(null())
};

void Ogg2WavSys_obj::__register()
{
	hx::Object *dummy = new Ogg2WavSys_obj;
	Ogg2WavSys_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Ogg2WavSys","\xc4","\x94","\xc2","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Ogg2WavSys_obj::__GetStatic;
	__mClass->mSetStaticField = &Ogg2WavSys_obj::__SetStatic;
	__mClass->mMarkFunc = Ogg2WavSys_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Ogg2WavSys_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Ogg2WavSys_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Ogg2WavSys_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ogg2WavSys_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ogg2WavSys_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Ogg2WavSys_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c3d1e793e0581dd5_89_boot)
HXLINE(  89)		platform = HX_("cpp",23,81,4b,00);
            	}
}

