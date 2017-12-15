#pragma once

namespace npp {

    struct Buffer_id
    {
        enum Enum: int {};
    };

    struct File_encoding         // "UniMode"
    {
        // See e.g. NPPM_GETBUFFERENCODING
        enum Enum: int
        {
            uni_8bit            = 0,        // "Uni8Bit"
            uni_UTF8            = 1,        // etc.
            uni_16BE            = 2,
            uni_16LE            = 3,
            uni_cookie          = 4,
            uni_7Bit            = 5,
            uni_16BE_noBOM      = 6,
            uni_16LE_noBOM      = 7,
            _
        };
        static constexpr Enum n_values = _;
    };

    inline auto is_unicode( const File_encoding::Enum encoding )
        -> bool
    {
        return false;
    }

    struct View_id
    {
        // MAIN_VIEW, SUB_VIEW
        enum Enum: int { main, secondary };
    };

    // For NPPM_GETNBOPENFILES, not same values as above.
    struct Extended_view_id
    {
        // ALL_OPEN_FILES, PRIMARY_VIEW, SECONDARY_VIEW
        enum Enum: int { all, main, secondary };

        static auto from( const View_id::Enum id )
            -> Enum
        { return static_cast<Enum>( id + 1 ); }
    };

}  // namespace npp
