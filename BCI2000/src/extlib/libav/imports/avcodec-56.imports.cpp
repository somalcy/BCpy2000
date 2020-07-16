// Import declarations for avcodec-56 library
// generated by C:\BCI2000.svn\build\buildutils\create_import_table.exe from win32-x86/dynamic/avcodec-56.dll
#if STATIC_LIBAVCODEC_56

namespace Dylib { bool avcodec_56_Loaded() { return true; } }
extern "C" {
}

#else

#include "DylibImports.h"
namespace { extern const Dylib::Import* functionImports; }

// Here you may specify a custom error message to be displayed when the library cannot be found.
static const char* notFoundMsg = "";
// Here you may specify an URL to some local or remote help resource.
static const char* notFoundURL = "";
RegisterDylibWithAliases( avcodec_56, "avcodec-56", functionImports, notFoundMsg, notFoundURL );

extern "C" {
// NOTE: When loading the library, function bodies will be overwritten with absolute jumps
// to imported functions, i.e. function bodies must be roughly 2 * sizeof(void*) bytes long.
// A call to a member function with a pointer argument should be large enough.
// 
// In addition, having distinct function bodies for each function stub
// is important -- that makes it impossible for size optimizers to
// collapse them into a single definition.
//
void av_bitstream_filter_close() { Dylib::avcodec_56.UninitializedFunctionExport( "av_bitstream_filter_close" ); }
void av_bitstream_filter_filter() { Dylib::avcodec_56.UninitializedFunctionExport( "av_bitstream_filter_filter" ); }
void av_bitstream_filter_init() { Dylib::avcodec_56.UninitializedFunctionExport( "av_bitstream_filter_init" ); }
void av_bitstream_filter_next() { Dylib::avcodec_56.UninitializedFunctionExport( "av_bitstream_filter_next" ); }
void av_codec_is_decoder() { Dylib::avcodec_56.UninitializedFunctionExport( "av_codec_is_decoder" ); }
void av_codec_is_encoder() { Dylib::avcodec_56.UninitializedFunctionExport( "av_codec_is_encoder" ); }
void av_codec_next() { Dylib::avcodec_56.UninitializedFunctionExport( "av_codec_next" ); }
void av_dct_calc() { Dylib::avcodec_56.UninitializedFunctionExport( "av_dct_calc" ); }
void av_dct_end() { Dylib::avcodec_56.UninitializedFunctionExport( "av_dct_end" ); }
void av_dct_init() { Dylib::avcodec_56.UninitializedFunctionExport( "av_dct_init" ); }
void av_destruct_packet() { Dylib::avcodec_56.UninitializedFunctionExport( "av_destruct_packet" ); }
void av_dup_packet() { Dylib::avcodec_56.UninitializedFunctionExport( "av_dup_packet" ); }
void av_dv_codec_profile() { Dylib::avcodec_56.UninitializedFunctionExport( "av_dv_codec_profile" ); }
void av_dv_frame_profile() { Dylib::avcodec_56.UninitializedFunctionExport( "av_dv_frame_profile" ); }
void av_fast_padded_malloc() { Dylib::avcodec_56.UninitializedFunctionExport( "av_fast_padded_malloc" ); }
void av_fft_calc() { Dylib::avcodec_56.UninitializedFunctionExport( "av_fft_calc" ); }
void av_fft_end() { Dylib::avcodec_56.UninitializedFunctionExport( "av_fft_end" ); }
void av_fft_init() { Dylib::avcodec_56.UninitializedFunctionExport( "av_fft_init" ); }
void av_fft_permute() { Dylib::avcodec_56.UninitializedFunctionExport( "av_fft_permute" ); }
void av_free_packet() { Dylib::avcodec_56.UninitializedFunctionExport( "av_free_packet" ); }
void av_get_audio_frame_duration() { Dylib::avcodec_56.UninitializedFunctionExport( "av_get_audio_frame_duration" ); }
void av_get_bits_per_sample() { Dylib::avcodec_56.UninitializedFunctionExport( "av_get_bits_per_sample" ); }
void av_get_codec_tag_string() { Dylib::avcodec_56.UninitializedFunctionExport( "av_get_codec_tag_string" ); }
void av_get_exact_bits_per_sample() { Dylib::avcodec_56.UninitializedFunctionExport( "av_get_exact_bits_per_sample" ); }
void av_get_profile_name() { Dylib::avcodec_56.UninitializedFunctionExport( "av_get_profile_name" ); }
void av_grow_packet() { Dylib::avcodec_56.UninitializedFunctionExport( "av_grow_packet" ); }
void av_hwaccel_next() { Dylib::avcodec_56.UninitializedFunctionExport( "av_hwaccel_next" ); }
void av_imdct_calc() { Dylib::avcodec_56.UninitializedFunctionExport( "av_imdct_calc" ); }
void av_imdct_half() { Dylib::avcodec_56.UninitializedFunctionExport( "av_imdct_half" ); }
void av_init_packet() { Dylib::avcodec_56.UninitializedFunctionExport( "av_init_packet" ); }
void av_lockmgr_register() { Dylib::avcodec_56.UninitializedFunctionExport( "av_lockmgr_register" ); }
void av_log_ask_for_sample() { Dylib::avcodec_56.UninitializedFunctionExport( "av_log_ask_for_sample" ); }
void av_log_missing_feature() { Dylib::avcodec_56.UninitializedFunctionExport( "av_log_missing_feature" ); }
void av_mdct_calc() { Dylib::avcodec_56.UninitializedFunctionExport( "av_mdct_calc" ); }
void av_mdct_end() { Dylib::avcodec_56.UninitializedFunctionExport( "av_mdct_end" ); }
void av_mdct_init() { Dylib::avcodec_56.UninitializedFunctionExport( "av_mdct_init" ); }
void av_new_packet() { Dylib::avcodec_56.UninitializedFunctionExport( "av_new_packet" ); }
void av_packet_copy_props() { Dylib::avcodec_56.UninitializedFunctionExport( "av_packet_copy_props" ); }
void av_packet_free_side_data() { Dylib::avcodec_56.UninitializedFunctionExport( "av_packet_free_side_data" ); }
void av_packet_from_data() { Dylib::avcodec_56.UninitializedFunctionExport( "av_packet_from_data" ); }
void av_packet_get_side_data() { Dylib::avcodec_56.UninitializedFunctionExport( "av_packet_get_side_data" ); }
void av_packet_move_ref() { Dylib::avcodec_56.UninitializedFunctionExport( "av_packet_move_ref" ); }
void av_packet_new_side_data() { Dylib::avcodec_56.UninitializedFunctionExport( "av_packet_new_side_data" ); }
void av_packet_ref() { Dylib::avcodec_56.UninitializedFunctionExport( "av_packet_ref" ); }
void av_packet_rescale_ts() { Dylib::avcodec_56.UninitializedFunctionExport( "av_packet_rescale_ts" ); }
void av_packet_shrink_side_data() { Dylib::avcodec_56.UninitializedFunctionExport( "av_packet_shrink_side_data" ); }
void av_packet_unref() { Dylib::avcodec_56.UninitializedFunctionExport( "av_packet_unref" ); }
void av_parser_change() { Dylib::avcodec_56.UninitializedFunctionExport( "av_parser_change" ); }
void av_parser_close() { Dylib::avcodec_56.UninitializedFunctionExport( "av_parser_close" ); }
void av_parser_init() { Dylib::avcodec_56.UninitializedFunctionExport( "av_parser_init" ); }
void av_parser_next() { Dylib::avcodec_56.UninitializedFunctionExport( "av_parser_next" ); }
void av_parser_parse2() { Dylib::avcodec_56.UninitializedFunctionExport( "av_parser_parse2" ); }
void av_picture_copy() { Dylib::avcodec_56.UninitializedFunctionExport( "av_picture_copy" ); }
void av_picture_crop() { Dylib::avcodec_56.UninitializedFunctionExport( "av_picture_crop" ); }
void av_picture_pad() { Dylib::avcodec_56.UninitializedFunctionExport( "av_picture_pad" ); }
void av_rdft_calc() { Dylib::avcodec_56.UninitializedFunctionExport( "av_rdft_calc" ); }
void av_rdft_end() { Dylib::avcodec_56.UninitializedFunctionExport( "av_rdft_end" ); }
void av_rdft_init() { Dylib::avcodec_56.UninitializedFunctionExport( "av_rdft_init" ); }
void av_register_bitstream_filter() { Dylib::avcodec_56.UninitializedFunctionExport( "av_register_bitstream_filter" ); }
void av_register_codec_parser() { Dylib::avcodec_56.UninitializedFunctionExport( "av_register_codec_parser" ); }
void av_register_hwaccel() { Dylib::avcodec_56.UninitializedFunctionExport( "av_register_hwaccel" ); }
void av_shrink_packet() { Dylib::avcodec_56.UninitializedFunctionExport( "av_shrink_packet" ); }
void av_xiphlacing() { Dylib::avcodec_56.UninitializedFunctionExport( "av_xiphlacing" ); }
void avcodec_align_dimensions() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_align_dimensions" ); }
void avcodec_align_dimensions2() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_align_dimensions2" ); }
void avcodec_alloc_context3() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_alloc_context3" ); }
void avcodec_alloc_frame() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_alloc_frame" ); }
void avcodec_close() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_close" ); }
void avcodec_configuration() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_configuration" ); }
void avcodec_copy_context() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_copy_context" ); }
void avcodec_decode_audio4() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_decode_audio4" ); }
void avcodec_decode_subtitle2() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_decode_subtitle2" ); }
void avcodec_decode_video2() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_decode_video2" ); }
void avcodec_default_execute() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_default_execute" ); }
void avcodec_default_execute2() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_default_execute2" ); }
void avcodec_default_get_buffer() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_default_get_buffer" ); }
void avcodec_default_get_buffer2() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_default_get_buffer2" ); }
void avcodec_default_get_format() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_default_get_format" ); }
void avcodec_default_reget_buffer() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_default_reget_buffer" ); }
void avcodec_default_release_buffer() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_default_release_buffer" ); }
void avcodec_descriptor_get() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_descriptor_get" ); }
void avcodec_descriptor_get_by_name() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_descriptor_get_by_name" ); }
void avcodec_descriptor_next() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_descriptor_next" ); }
void avcodec_encode_audio2() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_encode_audio2" ); }
void avcodec_encode_subtitle() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_encode_subtitle" ); }
void avcodec_encode_video2() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_encode_video2" ); }
void avcodec_fill_audio_frame() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_fill_audio_frame" ); }
void avcodec_find_best_pix_fmt2() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_find_best_pix_fmt2" ); }
void avcodec_find_decoder() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_find_decoder" ); }
void avcodec_find_decoder_by_name() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_find_decoder_by_name" ); }
void avcodec_find_encoder() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_find_encoder" ); }
void avcodec_find_encoder_by_name() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_find_encoder_by_name" ); }
void avcodec_flush_buffers() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_flush_buffers" ); }
void avcodec_free_context() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_free_context" ); }
void avcodec_free_frame() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_free_frame" ); }
void avcodec_get_chroma_sub_sample() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_get_chroma_sub_sample" ); }
void avcodec_get_class() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_get_class" ); }
void avcodec_get_context_defaults3() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_get_context_defaults3" ); }
void avcodec_get_edge_width() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_get_edge_width" ); }
void avcodec_get_frame_defaults() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_get_frame_defaults" ); }
void avcodec_get_pix_fmt_loss() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_get_pix_fmt_loss" ); }
void avcodec_get_type() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_get_type" ); }
void avcodec_is_open() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_is_open" ); }
void avcodec_license() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_license" ); }
void avcodec_open2() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_open2" ); }
void avcodec_pix_fmt_to_codec_tag() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_pix_fmt_to_codec_tag" ); }
void avcodec_register() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_register" ); }
void avcodec_register_all() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_register_all" ); }
void avcodec_set_dimensions() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_set_dimensions" ); }
void avcodec_string() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_string" ); }
void avcodec_version() { Dylib::avcodec_56.UninitializedFunctionExport( "avcodec_version" ); }
void avpicture_alloc() { Dylib::avcodec_56.UninitializedFunctionExport( "avpicture_alloc" ); }
void avpicture_deinterlace() { Dylib::avcodec_56.UninitializedFunctionExport( "avpicture_deinterlace" ); }
void avpicture_fill() { Dylib::avcodec_56.UninitializedFunctionExport( "avpicture_fill" ); }
void avpicture_free() { Dylib::avcodec_56.UninitializedFunctionExport( "avpicture_free" ); }
void avpicture_get_size() { Dylib::avcodec_56.UninitializedFunctionExport( "avpicture_get_size" ); }
void avpicture_layout() { Dylib::avcodec_56.UninitializedFunctionExport( "avpicture_layout" ); }
void avsubtitle_free() { Dylib::avcodec_56.UninitializedFunctionExport( "avsubtitle_free" ); }
}

namespace {
const Dylib::Import functionImports_[] =
{
  { "av_bitstream_filter_close", (void**)&av_bitstream_filter_close, Dylib::Import::functionStub },
  { "av_bitstream_filter_filter", (void**)&av_bitstream_filter_filter, Dylib::Import::functionStub },
  { "av_bitstream_filter_init", (void**)&av_bitstream_filter_init, Dylib::Import::functionStub },
  { "av_bitstream_filter_next", (void**)&av_bitstream_filter_next, Dylib::Import::functionStub },
  { "av_codec_is_decoder", (void**)&av_codec_is_decoder, Dylib::Import::functionStub },
  { "av_codec_is_encoder", (void**)&av_codec_is_encoder, Dylib::Import::functionStub },
  { "av_codec_next", (void**)&av_codec_next, Dylib::Import::functionStub },
  { "av_dct_calc", (void**)&av_dct_calc, Dylib::Import::functionStub },
  { "av_dct_end", (void**)&av_dct_end, Dylib::Import::functionStub },
  { "av_dct_init", (void**)&av_dct_init, Dylib::Import::functionStub },
  { "av_destruct_packet", (void**)&av_destruct_packet, Dylib::Import::functionStub },
  { "av_dup_packet", (void**)&av_dup_packet, Dylib::Import::functionStub },
  { "av_dv_codec_profile", (void**)&av_dv_codec_profile, Dylib::Import::functionStub },
  { "av_dv_frame_profile", (void**)&av_dv_frame_profile, Dylib::Import::functionStub },
  { "av_fast_padded_malloc", (void**)&av_fast_padded_malloc, Dylib::Import::functionStub },
  { "av_fft_calc", (void**)&av_fft_calc, Dylib::Import::functionStub },
  { "av_fft_end", (void**)&av_fft_end, Dylib::Import::functionStub },
  { "av_fft_init", (void**)&av_fft_init, Dylib::Import::functionStub },
  { "av_fft_permute", (void**)&av_fft_permute, Dylib::Import::functionStub },
  { "av_free_packet", (void**)&av_free_packet, Dylib::Import::functionStub },
  { "av_get_audio_frame_duration", (void**)&av_get_audio_frame_duration, Dylib::Import::functionStub },
  { "av_get_bits_per_sample", (void**)&av_get_bits_per_sample, Dylib::Import::functionStub },
  { "av_get_codec_tag_string", (void**)&av_get_codec_tag_string, Dylib::Import::functionStub },
  { "av_get_exact_bits_per_sample", (void**)&av_get_exact_bits_per_sample, Dylib::Import::functionStub },
  { "av_get_profile_name", (void**)&av_get_profile_name, Dylib::Import::functionStub },
  { "av_grow_packet", (void**)&av_grow_packet, Dylib::Import::functionStub },
  { "av_hwaccel_next", (void**)&av_hwaccel_next, Dylib::Import::functionStub },
  { "av_imdct_calc", (void**)&av_imdct_calc, Dylib::Import::functionStub },
  { "av_imdct_half", (void**)&av_imdct_half, Dylib::Import::functionStub },
  { "av_init_packet", (void**)&av_init_packet, Dylib::Import::functionStub },
  { "av_lockmgr_register", (void**)&av_lockmgr_register, Dylib::Import::functionStub },
  { "av_log_ask_for_sample", (void**)&av_log_ask_for_sample, Dylib::Import::functionStub },
  { "av_log_missing_feature", (void**)&av_log_missing_feature, Dylib::Import::functionStub },
  { "av_mdct_calc", (void**)&av_mdct_calc, Dylib::Import::functionStub },
  { "av_mdct_end", (void**)&av_mdct_end, Dylib::Import::functionStub },
  { "av_mdct_init", (void**)&av_mdct_init, Dylib::Import::functionStub },
  { "av_new_packet", (void**)&av_new_packet, Dylib::Import::functionStub },
  { "av_packet_copy_props", (void**)&av_packet_copy_props, Dylib::Import::functionStub },
  { "av_packet_free_side_data", (void**)&av_packet_free_side_data, Dylib::Import::functionStub },
  { "av_packet_from_data", (void**)&av_packet_from_data, Dylib::Import::functionStub },
  { "av_packet_get_side_data", (void**)&av_packet_get_side_data, Dylib::Import::functionStub },
  { "av_packet_move_ref", (void**)&av_packet_move_ref, Dylib::Import::functionStub },
  { "av_packet_new_side_data", (void**)&av_packet_new_side_data, Dylib::Import::functionStub },
  { "av_packet_ref", (void**)&av_packet_ref, Dylib::Import::functionStub },
  { "av_packet_rescale_ts", (void**)&av_packet_rescale_ts, Dylib::Import::functionStub },
  { "av_packet_shrink_side_data", (void**)&av_packet_shrink_side_data, Dylib::Import::functionStub },
  { "av_packet_unref", (void**)&av_packet_unref, Dylib::Import::functionStub },
  { "av_parser_change", (void**)&av_parser_change, Dylib::Import::functionStub },
  { "av_parser_close", (void**)&av_parser_close, Dylib::Import::functionStub },
  { "av_parser_init", (void**)&av_parser_init, Dylib::Import::functionStub },
  { "av_parser_next", (void**)&av_parser_next, Dylib::Import::functionStub },
  { "av_parser_parse2", (void**)&av_parser_parse2, Dylib::Import::functionStub },
  { "av_picture_copy", (void**)&av_picture_copy, Dylib::Import::functionStub },
  { "av_picture_crop", (void**)&av_picture_crop, Dylib::Import::functionStub },
  { "av_picture_pad", (void**)&av_picture_pad, Dylib::Import::functionStub },
  { "av_rdft_calc", (void**)&av_rdft_calc, Dylib::Import::functionStub },
  { "av_rdft_end", (void**)&av_rdft_end, Dylib::Import::functionStub },
  { "av_rdft_init", (void**)&av_rdft_init, Dylib::Import::functionStub },
  { "av_register_bitstream_filter", (void**)&av_register_bitstream_filter, Dylib::Import::functionStub },
  { "av_register_codec_parser", (void**)&av_register_codec_parser, Dylib::Import::functionStub },
  { "av_register_hwaccel", (void**)&av_register_hwaccel, Dylib::Import::functionStub },
  { "av_shrink_packet", (void**)&av_shrink_packet, Dylib::Import::functionStub },
  { "av_xiphlacing", (void**)&av_xiphlacing, Dylib::Import::functionStub },
  { "avcodec_align_dimensions", (void**)&avcodec_align_dimensions, Dylib::Import::functionStub },
  { "avcodec_align_dimensions2", (void**)&avcodec_align_dimensions2, Dylib::Import::functionStub },
  { "avcodec_alloc_context3", (void**)&avcodec_alloc_context3, Dylib::Import::functionStub },
  { "avcodec_alloc_frame", (void**)&avcodec_alloc_frame, Dylib::Import::functionStub },
  { "avcodec_close", (void**)&avcodec_close, Dylib::Import::functionStub },
  { "avcodec_configuration", (void**)&avcodec_configuration, Dylib::Import::functionStub },
  { "avcodec_copy_context", (void**)&avcodec_copy_context, Dylib::Import::functionStub },
  { "avcodec_decode_audio4", (void**)&avcodec_decode_audio4, Dylib::Import::functionStub },
  { "avcodec_decode_subtitle2", (void**)&avcodec_decode_subtitle2, Dylib::Import::functionStub },
  { "avcodec_decode_video2", (void**)&avcodec_decode_video2, Dylib::Import::functionStub },
  { "avcodec_default_execute", (void**)&avcodec_default_execute, Dylib::Import::functionStub },
  { "avcodec_default_execute2", (void**)&avcodec_default_execute2, Dylib::Import::functionStub },
  { "avcodec_default_get_buffer", (void**)&avcodec_default_get_buffer, Dylib::Import::functionStub },
  { "avcodec_default_get_buffer2", (void**)&avcodec_default_get_buffer2, Dylib::Import::functionStub },
  { "avcodec_default_get_format", (void**)&avcodec_default_get_format, Dylib::Import::functionStub },
  { "avcodec_default_reget_buffer", (void**)&avcodec_default_reget_buffer, Dylib::Import::functionStub },
  { "avcodec_default_release_buffer", (void**)&avcodec_default_release_buffer, Dylib::Import::functionStub },
  { "avcodec_descriptor_get", (void**)&avcodec_descriptor_get, Dylib::Import::functionStub },
  { "avcodec_descriptor_get_by_name", (void**)&avcodec_descriptor_get_by_name, Dylib::Import::functionStub },
  { "avcodec_descriptor_next", (void**)&avcodec_descriptor_next, Dylib::Import::functionStub },
  { "avcodec_encode_audio2", (void**)&avcodec_encode_audio2, Dylib::Import::functionStub },
  { "avcodec_encode_subtitle", (void**)&avcodec_encode_subtitle, Dylib::Import::functionStub },
  { "avcodec_encode_video2", (void**)&avcodec_encode_video2, Dylib::Import::functionStub },
  { "avcodec_fill_audio_frame", (void**)&avcodec_fill_audio_frame, Dylib::Import::functionStub },
  { "avcodec_find_best_pix_fmt2", (void**)&avcodec_find_best_pix_fmt2, Dylib::Import::functionStub },
  { "avcodec_find_decoder", (void**)&avcodec_find_decoder, Dylib::Import::functionStub },
  { "avcodec_find_decoder_by_name", (void**)&avcodec_find_decoder_by_name, Dylib::Import::functionStub },
  { "avcodec_find_encoder", (void**)&avcodec_find_encoder, Dylib::Import::functionStub },
  { "avcodec_find_encoder_by_name", (void**)&avcodec_find_encoder_by_name, Dylib::Import::functionStub },
  { "avcodec_flush_buffers", (void**)&avcodec_flush_buffers, Dylib::Import::functionStub },
  { "avcodec_free_context", (void**)&avcodec_free_context, Dylib::Import::functionStub },
  { "avcodec_free_frame", (void**)&avcodec_free_frame, Dylib::Import::functionStub },
  { "avcodec_get_chroma_sub_sample", (void**)&avcodec_get_chroma_sub_sample, Dylib::Import::functionStub },
  { "avcodec_get_class", (void**)&avcodec_get_class, Dylib::Import::functionStub },
  { "avcodec_get_context_defaults3", (void**)&avcodec_get_context_defaults3, Dylib::Import::functionStub },
  { "avcodec_get_edge_width", (void**)&avcodec_get_edge_width, Dylib::Import::functionStub },
  { "avcodec_get_frame_defaults", (void**)&avcodec_get_frame_defaults, Dylib::Import::functionStub },
  { "avcodec_get_pix_fmt_loss", (void**)&avcodec_get_pix_fmt_loss, Dylib::Import::functionStub },
  { "avcodec_get_type", (void**)&avcodec_get_type, Dylib::Import::functionStub },
  { "avcodec_is_open", (void**)&avcodec_is_open, Dylib::Import::functionStub },
  { "avcodec_license", (void**)&avcodec_license, Dylib::Import::functionStub },
  { "avcodec_open2", (void**)&avcodec_open2, Dylib::Import::functionStub },
  { "avcodec_pix_fmt_to_codec_tag", (void**)&avcodec_pix_fmt_to_codec_tag, Dylib::Import::functionStub },
  { "avcodec_register", (void**)&avcodec_register, Dylib::Import::functionStub },
  { "avcodec_register_all", (void**)&avcodec_register_all, Dylib::Import::functionStub },
  { "avcodec_set_dimensions", (void**)&avcodec_set_dimensions, Dylib::Import::functionStub },
  { "avcodec_string", (void**)&avcodec_string, Dylib::Import::functionStub },
  { "avcodec_version", (void**)&avcodec_version, Dylib::Import::functionStub },
  { "avpicture_alloc", (void**)&avpicture_alloc, Dylib::Import::functionStub },
  { "avpicture_deinterlace", (void**)&avpicture_deinterlace, Dylib::Import::functionStub },
  { "avpicture_fill", (void**)&avpicture_fill, Dylib::Import::functionStub },
  { "avpicture_free", (void**)&avpicture_free, Dylib::Import::functionStub },
  { "avpicture_get_size", (void**)&avpicture_get_size, Dylib::Import::functionStub },
  { "avpicture_layout", (void**)&avpicture_layout, Dylib::Import::functionStub },
  { "avsubtitle_free", (void**)&avsubtitle_free, Dylib::Import::functionStub },
  { 0, 0, 0 }
};
const Dylib::Import* functionImports = functionImports_;
}

#endif // STATIC_LIBAVCODEC_56
