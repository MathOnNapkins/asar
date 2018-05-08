#pragma once

#define ASAR_WARNING_RANGE_START	1000

// NOTE: Don't reorder these. That would change their ID.
// If you need to remove one, stub it out.
// If you need to add one, add it at the end (before warning_id_end).
// Keep in sync with asar_warnings.
enum asar_warning_id
{
	warning_id_start = ASAR_WARNING_RANGE_START,

	warning_id_relative_path_used,

	warning_id_rom_too_short,
	warning_id_rom_title_incorrect,

	warning_id_65816_yy_x_does_not_exist,
	warning_id_65816_xx_y_assume_16_bit,
	warning_id_spc700_assuming_8_bit,

	warning_id_cross_platform_path,

	warning_id_missing_org,
	warning_id_set_middle_byte,

	warning_id_unrecognized_special_command,

	warning_id_freespace_leaked,

	warning_id_warn_command,

	warning_id_xkas_deprecated,
	warning_id_xkas_eat_parentheses,
	warning_id_xkas_label_access,
	warning_id_xkas_warnpc_relaxed,
	warning_id_xkas_style_conditional,
	warning_id_xkas_patch,
	warning_id_xkas_incsrc_relative,
	warning_id_convert_to_asar,

	warning_id_fixed_deprecated,

	warning_id_autoclear_deprecated,

	warning_id_end,
	warning_id_count = warning_id_end - warning_id_start - 1
};

void asar_throw_warning(int whichpass, asar_warning_id warnid, ...);