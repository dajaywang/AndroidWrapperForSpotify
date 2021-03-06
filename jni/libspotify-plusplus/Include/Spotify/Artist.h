/*
 * Copyright 2011 Jim Knowler
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 */

#pragma once

// std include
#include <string>
#include <stdio.h>

// local includes
#include "libspotify/api.h"

namespace Spotify
{
	// forward declaration
	class Session;

	class Artist
	{
	public:

		Artist( Session* pSession );
		virtual ~Artist();

		void Load( sp_artist* pArtist );

		bool IsLoading();

		std::string GetName();


	protected:

		sp_artist*		m_pArtist;
		Session*		m_pSession;
	};

}
