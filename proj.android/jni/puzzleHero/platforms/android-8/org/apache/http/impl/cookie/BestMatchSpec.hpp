/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.cookie.BestMatchSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieSpec; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/cookie/Cookie.hpp>
#include <org/apache/http/cookie/CookieOrigin.hpp>
#include <org/apache/http/cookie/CookieSpec.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace cookie {

	class BestMatchSpec;
	class BestMatchSpec
		: public object<BestMatchSpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)

		explicit BestMatchSpec(jobject jobj)
		: object<BestMatchSpec>(jobj)
		{
		}

		operator local_ref<org::apache::http::cookie::CookieSpec>() const;
		operator local_ref<java::lang::Object>() const;


		BestMatchSpec(local_ref< array< local_ref< java::lang::String >, 1> > const&, jboolean);
		BestMatchSpec();
		local_ref< java::util::List > parse(local_ref< org::apache::http::Header >  const&, local_ref< org::apache::http::cookie::CookieOrigin >  const&);
		void validate(local_ref< org::apache::http::cookie::Cookie >  const&, local_ref< org::apache::http::cookie::CookieOrigin >  const&);
		jboolean match(local_ref< org::apache::http::cookie::Cookie >  const&, local_ref< org::apache::http::cookie::CookieOrigin >  const&);
		local_ref< java::util::List > formatCookies(local_ref< java::util::List >  const&);
		jint getVersion();
		local_ref< org::apache::http::Header > getVersionHeader();
	}; //class BestMatchSpec

} //namespace cookie
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::cookie::BestMatchSpec::operator local_ref<org::apache::http::cookie::CookieSpec>() const
{
	return local_ref<org::apache::http::cookie::CookieSpec>(get_jobject());
}

org::apache::http::impl::cookie::BestMatchSpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::impl::cookie::BestMatchSpec::BestMatchSpec(local_ref< array< local_ref< java::lang::String >, 1> > const &a0, jboolean a1)
: object<org::apache::http::impl::cookie::BestMatchSpec>(
	call_new_object<
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



org::apache::http::impl::cookie::BestMatchSpec::BestMatchSpec()
: object<org::apache::http::impl::cookie::BestMatchSpec>(
	call_new_object<
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_SIGNATURE(1)
	>()
)
{
}


local_ref< java::util::List > org::apache::http::impl::cookie::BestMatchSpec::parse(local_ref< org::apache::http::Header > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return call_method<
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::List >
	>(get_jobject(), a0, a1);
}

void org::apache::http::impl::cookie::BestMatchSpec::validate(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return call_method<
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

jboolean org::apache::http::impl::cookie::BestMatchSpec::match(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return call_method<
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0, a1);
}

local_ref< java::util::List > org::apache::http::impl::cookie::BestMatchSpec::formatCookies(local_ref< java::util::List > const &a0)
{
	return call_method<
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::List >
	>(get_jobject(), a0);
}

jint org::apache::http::impl::cookie::BestMatchSpec::getVersion()
{
	return call_method<
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

local_ref< org::apache::http::Header > org::apache::http::impl::cookie::BestMatchSpec::getVersionHeader()
{
	return call_method<
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_NAME(7),
		org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< org::apache::http::Header >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::cookie::BestMatchSpec,"org/apache/http/impl/cookie/BestMatchSpec")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,0,"<init>","([java.lang.StringZ)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,1,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,2,"parse","(Lorg/apache/http/Header;Lorg/apache/http/cookie/CookieOrigin;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,3,"validate","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,4,"match","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,5,"formatCookies","(Ljava/util/List;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,6,"getVersion","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,7,"getVersionHeader","()Lorg/apache/http/Header;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
