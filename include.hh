//
// Created by Aidan on 10/2/2020.
//

#pragma once

#ifndef DPPBOT_EXTERN

#include <fstream>
#include <iostream>
#include <regex>

#include <boost/asio.hpp>

// Put more non-plugin `include`s here

#endif

#include <discordpp/bot.hh>
#include <discordpp/websocket-simpleweb.hh>
#include <discordpp/rest-beast.hh>
#include <discordpp/plugin-ratelimit.hh>
#include <discordpp/plugin-overload.hh>
#include <discordpp/plugin-responder.hh>
#include <discordpp/plugin-endpoints.hh>
#include <discordpp/plugin-constructs.hh>

// Put more D++ plugin `include`s here

#ifndef DPPBOT_EXTERN

extern template class discordpp::PluginConstructs<discordpp::PluginEndpoints<discordpp::PluginOverload<discordpp::PluginOverload<discordpp::PluginRateLimit<discordpp::RestBeast<discordpp::WebsocketSimpleWeb<discordpp::Bot>>>>>>>;
using DppBot = discordpp::PluginConstructs<discordpp::PluginEndpoints<discordpp::PluginOverload<discordpp::PluginOverload<discordpp::PluginRateLimit<discordpp::RestBeast<discordpp::WebsocketSimpleWeb<discordpp::Bot>>>>>>>;

#undef DPPBOT_EXTERN

#endif
