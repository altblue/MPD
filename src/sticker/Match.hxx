// SPDX-License-Identifier: GPL-2.0-or-later
// Copyright The Music Player Daemon Project

#ifndef MPD_STICKER_MATCH_HXX
#define MPD_STICKER_MATCH_HXX

enum class StickerOperator {
	/**
	 * Matches if a sticker with the specified name exists.  The
	 * "value" parameter is ignored (must be nullptr).
	 */
	EXISTS,

	/**
	 * Matches if a sticker with the specified name and value
	 * exists.
	 */
	EQUALS,

	/**
	 * Matches if a sticker with the specified name exists with a
	 * value smaller than the specified one.
	 */
	LESS_THAN,

	/**
	 * Matches if a sticker with the specified name exists with a
	 * value bigger than the specified one.
	 */
	GREATER_THAN,
};

#endif
