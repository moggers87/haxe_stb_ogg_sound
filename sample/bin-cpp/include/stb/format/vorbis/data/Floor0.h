// Generated by Haxe 3.4.0 (git build development @ 75c0f05)
#ifndef INCLUDED_stb_format_vorbis_data_Floor0
#define INCLUDED_stb_format_vorbis_data_Floor0

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e1e6385c47010ce3_130_new)
HX_DECLARE_CLASS4(stb,format,vorbis,data,Floor0)

namespace stb{
namespace format{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES Floor0_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Floor0_obj OBJ_;
		Floor0_obj();

	public:
		enum { _hx_ClassId = 0x4e157199 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="stb.format.vorbis.data.Floor0")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"stb.format.vorbis.data.Floor0"); }

		hx::ObjectPtr< Floor0_obj > __new() {
			hx::ObjectPtr< Floor0_obj > __this = new Floor0_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Floor0_obj > __alloc(hx::Ctx *_hx_ctx) {
			Floor0_obj *__this = (Floor0_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Floor0_obj), true, "stb.format.vorbis.data.Floor0"));
			*(void **)__this = Floor0_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e1e6385c47010ce3_130_new)
            	HX_STACK_THIS(__this)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Floor0_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Floor0","\x04","\x35","\xf5","\x75"); }

		int order;
		int rate;
		int barkMapSize;
		int amplitudeBits;
		int amplitudeOffset;
		int numberOfBooks;
		::Array< int > bookList;
};

} // end namespace stb
} // end namespace format
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_stb_format_vorbis_data_Floor0 */ 
