﻿#pragma once

#include "social/SocialLoginResult.h"

NS_VIGAME_SOCIAL_BEGIN


class DownjoyLoginResult : public SocialLoginResult
{
public:
	std::string umid;//(登录)授权用户唯一标识
	std::string accessToken;//接口调用凭证
public:

	virtual bool parse(const std::unordered_map<std::string, std::string>& param) override;
};

NS_VIGAME_SOCIAL_END