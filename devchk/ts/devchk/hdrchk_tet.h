#include <tet_api.h>

#include "testdefs.h"

static void startup(), cleanup();

void (*tet_startup)() = NULL;
void (*tet_cleanup)() = NULL;

struct tet_testlist tet_testlist[] = {
	{ GL_gl_h, 1 },
	{ GL_glx_h, 2 },
	{ X11_Composite_h, 3 },
	{ X11_CompositeP_h, 4 },
	{ X11_ConstrainP_h, 5 },
	{ X11_Constraint_h, 6 },
	{ X11_ICE_ICElib_h, 7 },
	{ X11_ICE_ICEutil_h, 8 },
	{ X11_Intrinsic_h, 9 },
	{ X11_ObjectP_h, 10 },
	{ X11_SM_SMlib_h, 11 },
	{ X11_X_h, 12 },
	{ X11_Xauth_h, 13 },
	{ X11_Xcms_h, 14 },
	{ X11_Xft_Xft_h, 15 },
	{ X11_Xlib_h, 16 },
	{ X11_Xutil_h, 17 },
	{ X11_extensions_XEVI_h, 18 },
	{ X11_extensions_Xrender_h, 19 },
	{ X11_extensions_render_h, 20 },
	{ X11_extensions_security_h, 21 },
	{ X11_extensions_sync_h, 22 },
	{ alsa_conf_h, 23 },
	{ alsa_control_h, 24 },
	{ alsa_control_external_h, 25 },
	{ alsa_error_h, 26 },
	{ alsa_global_h, 27 },
	{ alsa_hwdep_h, 28 },
	{ alsa_iatomic_h, 29 },
	{ alsa_input_h, 30 },
	{ alsa_instr_h, 31 },
	{ alsa_mixer_h, 32 },
	{ alsa_mixer_abst_h, 33 },
	{ alsa_output_h, 34 },
	{ alsa_pcm_h, 35 },
	{ alsa_pcm_extplug_h, 36 },
	{ alsa_pcm_ioplug_h, 37 },
	{ alsa_pcm_plugin_h, 38 },
	{ alsa_rawmidi_h, 39 },
	{ alsa_seq_h, 40 },
	{ alsa_seq_event_h, 41 },
	{ alsa_seq_midi_event_h, 42 },
	{ alsa_seqmid_h, 43 },
	{ alsa_timer_h, 44 },
	{ atk_1_0_atk_atk_enum_types_h, 45 },
	{ atk_1_0_atk_atk_h, 46 },
	{ complex_h, 47 },
	{ cpio_h, 48 },
	{ ctype_h, 49 },
	{ cups_cups_h, 50 },
	{ cups_ppd_h, 51 },
	{ cups_raster_h, 52 },
	{ curses_h, 53 },
	{ dirent_h, 54 },
	{ dlfcn_h, 55 },
	{ errno_h, 56 },
	{ fcntl_h, 57 },
	{ fenv_h, 58 },
	{ fmtmsg_h, 59 },
	{ fnmatch_h, 60 },
	{ fontconfig_fcprivate_h, 61 },
	{ fontconfig_fontconfig_h, 62 },
	{ freetype_config_ftheader_h, 63 },
	{ freetype_config_ftoption_h, 64 },
	{ freetype_config_ftstdlib_h, 65 },
	{ freetype_freetype_h, 66 },
	{ freetype_ftbdf_h, 67 },
	{ freetype_fterrdef_h, 68 },
	{ freetype_fterrors_h, 69 },
	{ freetype_ftglyph_h, 70 },
	{ freetype_ftimage_h, 71 },
	{ freetype_ftincrem_h, 72 },
	{ freetype_ftlist_h, 73 },
	{ freetype_ftmm_h, 74 },
	{ freetype_ftmodapi_h, 75 },
	{ freetype_ftmoderr_h, 76 },
	{ freetype_ftotval_h, 77 },
	{ freetype_ftoutln_h, 78 },
	{ freetype_ftrender_h, 79 },
	{ freetype_ftsnames_h, 80 },
	{ freetype_ftstroke_h, 81 },
	{ freetype_ftsystem_h, 82 },
	{ freetype_fttrigon_h, 83 },
	{ freetype_fttypes_h, 84 },
	{ freetype_t1tables_h, 85 },
	{ freetype_ttnameid_h, 86 },
	{ freetype_tttables_h, 87 },
	{ freetype_tttags_h, 88 },
	{ freetype_ttunpat_h, 89 },
	{ ft2build_h, 90 },
	{ ftw_h, 91 },
	{ getopt_h, 92 },
	{ glib_2_0_glib_object_h, 93 },
	{ glib_2_0_glib_h, 94 },
	{ glib_2_0_glib_gstdio_h, 95 },
	{ glib_2_0_gmodule_h, 96 },
	{ glib_2_0_gobject_gvaluecollector_h, 97 },
	{ glob_h, 98 },
	{ grp_h, 99 },
	{ gtk_2_0_gdk_pixbuf_xlib_gdk_pixbuf_xlib_h, 100 },
	{ gtk_2_0_gdk_pixbuf_gdk_pixbuf_h, 101 },
	{ gtk_2_0_gdk_pixbuf_gdk_pixdata_h, 102 },
	{ gtk_2_0_gdk_gdk_h, 103 },
	{ gtk_2_0_gdk_gdkkeysyms_h, 104 },
	{ gtk_2_0_gdk_gdkx_h, 105 },
	{ gtk_2_0_gtk_gtk_h, 106 },
	{ iconv_h, 107 },
	{ inttypes_h, 108 },
	{ jpeglib_h, 109 },
	{ langinfo_h, 110 },
	{ libxml2_libxml_HTMLparser_h, 111 },
	{ libxml2_libxml_HTMLtree_h, 112 },
	{ libxml2_libxml_SAX2_h, 113 },
	{ libxml2_libxml_c14n_h, 114 },
	{ libxml2_libxml_catalog_h, 115 },
	{ libxml2_libxml_debugXML_h, 116 },
	{ libxml2_libxml_dict_h, 117 },
	{ libxml2_libxml_encoding_h, 118 },
	{ libxml2_libxml_entities_h, 119 },
	{ libxml2_libxml_globals_h, 120 },
	{ libxml2_libxml_hash_h, 121 },
	{ libxml2_libxml_list_h, 122 },
	{ libxml2_libxml_parser_h, 123 },
	{ libxml2_libxml_parserInternals_h, 124 },
	{ libxml2_libxml_pattern_h, 125 },
	{ libxml2_libxml_relaxng_h, 126 },
	{ libxml2_libxml_schematron_h, 127 },
	{ libxml2_libxml_threads_h, 128 },
	{ libxml2_libxml_tree_h, 129 },
	{ libxml2_libxml_uri_h, 130 },
	{ libxml2_libxml_valid_h, 131 },
	{ libxml2_libxml_xinclude_h, 132 },
	{ libxml2_libxml_xmlIO_h, 133 },
	{ libxml2_libxml_xmlautomata_h, 134 },
	{ libxml2_libxml_xmlerror_h, 135 },
	{ libxml2_libxml_xmlexports_h, 136 },
	{ libxml2_libxml_xmlmemory_h, 137 },
	{ libxml2_libxml_xmlmodule_h, 138 },
	{ libxml2_libxml_xmlreader_h, 139 },
	{ libxml2_libxml_xmlregexp_h, 140 },
	{ libxml2_libxml_xmlsave_h, 141 },
	{ libxml2_libxml_xmlschemas_h, 142 },
	{ libxml2_libxml_xmlschemastypes_h, 143 },
	{ libxml2_libxml_xmlstring_h, 144 },
	{ libxml2_libxml_xmlversion_h, 145 },
	{ libxml2_libxml_xmlwriter_h, 146 },
	{ libxml2_libxml_xpath_h, 147 },
	{ libxml2_libxml_xpathInternals_h, 148 },
	{ libxml2_libxml_xpointer_h, 149 },
	{ limits_h, 150 },
	{ locale_h, 151 },
	{ math_h, 152 },
	{ mqueue_h, 153 },
	{ net_if_h, 154 },
	{ netdb_h, 155 },
	{ netinet_in_h, 156 },
	{ netinet_ip_h, 157 },
	{ netinet_tcp_h, 158 },
	{ netinet_udp_h, 159 },
	{ nl_types_h, 160 },
	{ pango_1_0_pango_pango_h, 161 },
	{ pango_1_0_pango_pangofc_decoder_h, 162 },
	{ pango_1_0_pango_pangofc_fontmap_h, 163 },
	{ pango_1_0_pango_pangoft2_h, 164 },
	{ pango_1_0_pango_pangoxft_h, 165 },
	{ png_h, 166 },
	{ pthread_h, 167 },
	{ pwd_h, 168 },
	{ regex_h, 169 },
	{ rpc_auth_h, 170 },
	{ rpc_clnt_h, 171 },
	{ rpc_rpc_msg_h, 172 },
	{ rpc_svc_h, 173 },
	{ rpc_types_h, 174 },
	{ rpc_xdr_h, 175 },
	{ sched_h, 176 },
	{ search_h, 177 },
	{ security_pam_appl_h, 178 },
	{ semaphore_h, 179 },
	{ setjmp_h, 180 },
	{ signal_h, 181 },
	{ spawn_h, 182 },
	{ stddef_h, 183 },
	{ stdint_h, 184 },
	{ stdio_h, 185 },
	{ stdlib_h, 186 },
	{ sys_file_h, 187 },
	{ sys_ioctl_h, 188 },
	{ sys_ipc_h, 189 },
	{ sys_mman_h, 190 },
	{ sys_msg_h, 191 },
	{ sys_param_h, 192 },
	{ sys_poll_h, 193 },
	{ sys_resource_h, 194 },
	{ sys_sem_h, 195 },
	{ sys_shm_h, 196 },
	{ sys_socket_h, 197 },
	{ sys_stat_h, 198 },
	{ sys_statfs_h, 199 },
	{ sys_statvfs_h, 200 },
	{ sys_time_h, 201 },
	{ sys_timeb_h, 202 },
	{ sys_times_h, 203 },
	{ sys_types_h, 204 },
	{ sys_un_h, 205 },
	{ sys_utsname_h, 206 },
	{ sys_wait_h, 207 },
	{ syslog_h, 208 },
	{ tar_h, 209 },
	{ termios_h, 210 },
	{ time_h, 211 },
	{ ucontext_h, 212 },
	{ ulimit_h, 213 },
	{ unistd_h, 214 },
	{ utime_h, 215 },
	{ utmp_h, 216 },
	{ utmpx_h, 217 },
	{ wchar_h, 218 },
	{ wctype_h, 219 },
	{ wordexp_h, 220 },
	{ zlib_h, 221 },
	{ NULL, 0 }
};
