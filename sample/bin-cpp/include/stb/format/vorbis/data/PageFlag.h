// Generated by Haxe 3.4.0 (git build development @ 75c0f05)
#ifndef INCLUDED_stb_format_vorbis_data_PageFlag
#define INCLUDED_stb_format_vorbis_data_PageFlag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(stb,format,vorbis,data,PageFlag)

namespace stb{
namespace format{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES PageFlag_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef PageFlag_obj OBJ_;
		PageFlag_obj();

	public:
		enum { _hx_ClassId = 0x744fed90 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="stb.format.vorbis.data.PageFlag")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"stb.format.vorbis.data.PageFlag"); }

		hx::ObjectPtr< PageFlag_obj > __new() {
			hx::ObjectPtr< PageFlag_obj > __this = new PageFlag_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< PageFlag_obj > __alloc(hx::Ctx *_hx_ctx) {
			PageFlag_obj *__this = (PageFlag_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PageFlag_obj), false, "stb.format.vorbis.data.PageFlag"));
			*(void **)__this = PageFlag_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PageFlag_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PageFlag","\xbb","\xa1","\x37","\x26"); }

		static void __boot();
		static int CONTINUED_PACKET;
		static int FIRST_PAGE;
		static int LAST_PAGE;
};

} // end namespace stb
} // end namespace format
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_stb_format_vorbis_data_PageFlag */ 
