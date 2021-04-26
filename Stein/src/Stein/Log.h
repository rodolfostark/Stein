#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Stein {
	
	class STEIN_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define ST_CORE_TRACE(...) ::Stein::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ST_CORE_INFO(...) ::Stein::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ST_CORE_WARN(...) ::Stein::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ST_CORE_ERROR(...) ::Stein::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ST_CORE_FATAL(...) ::Stein::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define ST_TRACE(...) ::Stein::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ST_INFO(...) ::Stein::Log::GetClientLogger()->info(__VA_ARGS__)
#define ST_WARN(...) ::Stein::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ST_ERROR(...) ::Stein::Log::GetClientLogger()->error(__VA_ARGS__)
#define ST_FATAL(...) ::Stein::Log::GetClientLogger()->fatal(__VA_ARGS__)
