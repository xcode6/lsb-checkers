#include <tet_api.h>

#include "testdefs.h"

static void startup(), cleanup();

void (*tet_startup)() = NULL;
void (*tet_cleanup)() = NULL;

struct tet_testlist tet_testlist[] = {
	{ GL_gl_h, 1 },
	{ GL_glext_h, 2 },
	{ GL_glu_h, 3 },
	{ GL_glx_h, 4 },
	{ GL_glxext_h, 5 },
	{ X11_Composite_h, 6 },
	{ X11_CompositeP_h, 7 },
	{ X11_ConstrainP_h, 8 },
	{ X11_Constraint_h, 9 },
	{ X11_ICE_ICE_h, 10 },
	{ X11_ICE_ICEconn_h, 11 },
	{ X11_ICE_ICElib_h, 12 },
	{ X11_ICE_ICEmsg_h, 13 },
	{ X11_ICE_ICEproto_h, 14 },
	{ X11_ICE_ICEutil_h, 15 },
	{ X11_Intrinsic_h, 16 },
	{ X11_IntrinsicP_h, 17 },
	{ X11_ObjectP_h, 18 },
	{ X11_SM_SM_h, 19 },
	{ X11_SM_SMlib_h, 20 },
	{ X11_SM_SMproto_h, 21 },
	{ X11_X_h, 22 },
	{ X11_XKBlib_h, 23 },
	{ X11_Xauth_h, 24 },
	{ X11_Xcms_h, 25 },
	{ X11_Xft_Xft_h, 26 },
	{ X11_Xlib_h, 27 },
	{ X11_Xresource_h, 28 },
	{ X11_Xutil_h, 29 },
	{ X11_extensions_XEVI_h, 30 },
	{ X11_extensions_XInput_h, 31 },
	{ X11_extensions_XKBgeom_h, 32 },
	{ X11_extensions_XShm_h, 33 },
	{ X11_extensions_XTest_h, 34 },
	{ X11_extensions_Xdbe_h, 35 },
	{ X11_extensions_Xext_h, 36 },
	{ X11_extensions_Xrender_h, 37 },
	{ X11_extensions_dpms_h, 38 },
	{ X11_extensions_extutil_h, 39 },
	{ X11_extensions_render_h, 40 },
	{ X11_extensions_security_h, 41 },
	{ X11_extensions_shape_h, 42 },
	{ X11_extensions_sync_h, 43 },
	{ alsa_conf_h, 44 },
	{ alsa_control_h, 45 },
	{ alsa_control_external_h, 46 },
	{ alsa_error_h, 47 },
	{ alsa_global_h, 48 },
	{ alsa_hwdep_h, 49 },
	{ alsa_iatomic_h, 50 },
	{ alsa_input_h, 51 },
	{ alsa_instr_h, 52 },
	{ alsa_mixer_h, 53 },
	{ alsa_mixer_abst_h, 54 },
	{ alsa_output_h, 55 },
	{ alsa_pcm_h, 56 },
	{ alsa_pcm_extplug_h, 57 },
	{ alsa_pcm_plugin_h, 58 },
	{ alsa_rawmidi_h, 59 },
	{ alsa_seq_h, 60 },
	{ alsa_seq_event_h, 61 },
	{ alsa_seq_midi_event_h, 62 },
	{ alsa_seqmid_h, 63 },
	{ alsa_timer_h, 64 },
	{ assert_h, 65 },
	{ atk_1_0_atk_atk_enum_types_h, 66 },
	{ atk_1_0_atk_atk_h, 67 },
	{ cairo_cairo_features_h, 68 },
	{ cairo_cairo_h, 69 },
	{ complex_h, 70 },
	{ cpio_h, 71 },
	{ ctype_h, 72 },
	{ cups_cups_h, 73 },
	{ cups_ppd_h, 74 },
	{ cups_raster_h, 75 },
	{ curses_h, 76 },
	{ dirent_h, 77 },
	{ dlfcn_h, 78 },
	{ endian_h, 79 },
	{ errno_h, 80 },
	{ fcntl_h, 81 },
	{ fenv_h, 82 },
	{ fmtmsg_h, 83 },
	{ fnmatch_h, 84 },
	{ fontconfig_fcprivate_h, 85 },
	{ fontconfig_fontconfig_h, 86 },
	{ freetype_config_ftheader_h, 87 },
	{ freetype_config_ftoption_h, 88 },
	{ freetype_config_ftstdlib_h, 89 },
	{ freetype_freetype_h, 90 },
	{ freetype_ftbdf_h, 91 },
	{ freetype_fterrors_h, 92 },
	{ freetype_ftglyph_h, 93 },
	{ freetype_ftimage_h, 94 },
	{ freetype_ftincrem_h, 95 },
	{ freetype_ftlist_h, 96 },
	{ freetype_ftmm_h, 97 },
	{ freetype_ftmodapi_h, 98 },
	{ freetype_ftmoderr_h, 99 },
	{ freetype_ftotval_h, 100 },
	{ freetype_ftoutln_h, 101 },
	{ freetype_ftrender_h, 102 },
	{ freetype_ftsnames_h, 103 },
	{ freetype_ftstroke_h, 104 },
	{ freetype_ftsystem_h, 105 },
	{ freetype_fttrigon_h, 106 },
	{ freetype_fttypes_h, 107 },
	{ freetype_t1tables_h, 108 },
	{ freetype_ttnameid_h, 109 },
	{ freetype_tttables_h, 110 },
	{ freetype_tttags_h, 111 },
	{ freetype_ttunpat_h, 112 },
	{ ft2build_h, 113 },
	{ ftw_h, 114 },
	{ getopt_h, 115 },
	{ glib_2_0_glib_object_h, 116 },
	{ glib_2_0_glib_h, 117 },
	{ glib_2_0_glib_gstdio_h, 118 },
	{ glib_2_0_gmodule_h, 119 },
	{ glib_2_0_gobject_gvaluecollector_h, 120 },
	{ glob_h, 121 },
	{ grp_h, 122 },
	{ gtk_2_0_gdk_pixbuf_xlib_gdk_pixbuf_xlib_h, 123 },
	{ gtk_2_0_gdk_pixbuf_gdk_pixbuf_h, 124 },
	{ gtk_2_0_gdk_pixbuf_gdk_pixdata_h, 125 },
	{ gtk_2_0_gdk_gdk_h, 126 },
	{ gtk_2_0_gdk_gdkkeysyms_h, 127 },
	{ gtk_2_0_gdk_gdkx_h, 128 },
	{ gtk_2_0_gtk_gtk_h, 129 },
	{ iconv_h, 130 },
	{ inttypes_h, 131 },
	{ jpeglib_h, 132 },
	{ langinfo_h, 133 },
	{ libxml2_libxml_HTMLparser_h, 134 },
	{ libxml2_libxml_HTMLtree_h, 135 },
	{ libxml2_libxml_SAX2_h, 136 },
	{ libxml2_libxml_c14n_h, 137 },
	{ libxml2_libxml_catalog_h, 138 },
	{ libxml2_libxml_debugXML_h, 139 },
	{ libxml2_libxml_dict_h, 140 },
	{ libxml2_libxml_encoding_h, 141 },
	{ libxml2_libxml_entities_h, 142 },
	{ libxml2_libxml_globals_h, 143 },
	{ libxml2_libxml_hash_h, 144 },
	{ libxml2_libxml_list_h, 145 },
	{ libxml2_libxml_parser_h, 146 },
	{ libxml2_libxml_parserInternals_h, 147 },
	{ libxml2_libxml_pattern_h, 148 },
	{ libxml2_libxml_relaxng_h, 149 },
	{ libxml2_libxml_schematron_h, 150 },
	{ libxml2_libxml_threads_h, 151 },
	{ libxml2_libxml_tree_h, 152 },
	{ libxml2_libxml_uri_h, 153 },
	{ libxml2_libxml_valid_h, 154 },
	{ libxml2_libxml_xinclude_h, 155 },
	{ libxml2_libxml_xmlIO_h, 156 },
	{ libxml2_libxml_xmlautomata_h, 157 },
	{ libxml2_libxml_xmlerror_h, 158 },
	{ libxml2_libxml_xmlexports_h, 159 },
	{ libxml2_libxml_xmlmemory_h, 160 },
	{ libxml2_libxml_xmlmodule_h, 161 },
	{ libxml2_libxml_xmlreader_h, 162 },
	{ libxml2_libxml_xmlregexp_h, 163 },
	{ libxml2_libxml_xmlsave_h, 164 },
	{ libxml2_libxml_xmlschemas_h, 165 },
	{ libxml2_libxml_xmlschemastypes_h, 166 },
	{ libxml2_libxml_xmlstring_h, 167 },
	{ libxml2_libxml_xmlversion_h, 168 },
	{ libxml2_libxml_xmlwriter_h, 169 },
	{ libxml2_libxml_xpath_h, 170 },
	{ libxml2_libxml_xpathInternals_h, 171 },
	{ libxml2_libxml_xpointer_h, 172 },
	{ limits_h, 173 },
	{ locale_h, 174 },
	{ math_h, 175 },
	{ mqueue_h, 176 },
	{ net_if_h, 177 },
	{ netdb_h, 178 },
	{ netinet_in_h, 179 },
	{ netinet_ip_h, 180 },
	{ netinet_tcp_h, 181 },
	{ netinet_udp_h, 182 },
	{ nl_types_h, 183 },
	{ nspr4_plarena_h, 184 },
	{ nspr4_plhash_h, 185 },
	{ nspr4_prclist_h, 186 },
	{ nspr4_prinrval_h, 187 },
	{ nspr4_prio_h, 188 },
	{ nspr4_prlock_h, 189 },
	{ nspr4_prmon_h, 190 },
	{ nspr4_prtime_h, 191 },
	{ nspr4_prtypes_h, 192 },
	{ nss3_blapit_h, 193 },
	{ nss3_certt_h, 194 },
	{ nss3_cmsreclist_h, 195 },
	{ nss3_cryptoht_h, 196 },
	{ nss3_hasht_h, 197 },
	{ nss3_key_h, 198 },
	{ nss3_keyt_h, 199 },
	{ nss3_keythi_h, 200 },
	{ nss3_nss_h, 201 },
	{ nss3_nssb64t_h, 202 },
	{ nss3_nssbaset_h, 203 },
	{ nss3_nssilckt_h, 204 },
	{ nss3_nssrwlkt_h, 205 },
	{ nss3_ocspt_h, 206 },
	{ nss3_pkcs11t_h, 207 },
	{ nss3_pkcs7t_h, 208 },
	{ nss3_preenc_h, 209 },
	{ nss3_secasn1t_h, 210 },
	{ nss3_seccomon_h, 211 },
	{ nss3_secdert_h, 212 },
	{ nss3_secdigt_h, 213 },
	{ nss3_secmodt_h, 214 },
	{ nss3_secoidt_h, 215 },
	{ nss3_secpkcs5_h, 216 },
	{ nss3_secport_h, 217 },
	{ nss3_ssl_h, 218 },
	{ nss3_sslt_h, 219 },
	{ pango_1_0_pango_pango_h, 220 },
	{ pango_1_0_pango_pangocairo_h, 221 },
	{ pango_1_0_pango_pangofc_decoder_h, 222 },
	{ pango_1_0_pango_pangofc_fontmap_h, 223 },
	{ pango_1_0_pango_pangoft2_h, 224 },
	{ pango_1_0_pango_pangoxft_h, 225 },
	{ png_h, 226 },
	{ pthread_h, 227 },
	{ pwd_h, 228 },
	{ regex_h, 229 },
	{ rpc_auth_h, 230 },
	{ rpc_clnt_h, 231 },
	{ rpc_rpc_h, 232 },
	{ rpc_rpc_msg_h, 233 },
	{ rpc_svc_h, 234 },
	{ rpc_types_h, 235 },
	{ rpc_xdr_h, 236 },
	{ sched_h, 237 },
	{ search_h, 238 },
	{ security_pam_appl_h, 239 },
	{ semaphore_h, 240 },
	{ setjmp_h, 241 },
	{ signal_h, 242 },
	{ spawn_h, 243 },
	{ stddef_h, 244 },
	{ stdint_h, 245 },
	{ stdio_h, 246 },
	{ stdlib_h, 247 },
	{ sys_epoll_h, 248 },
	{ sys_file_h, 249 },
	{ sys_inotify_h, 250 },
	{ sys_ioctl_h, 251 },
	{ sys_ipc_h, 252 },
	{ sys_mman_h, 253 },
	{ sys_msg_h, 254 },
	{ sys_param_h, 255 },
	{ sys_poll_h, 256 },
	{ sys_resource_h, 257 },
	{ sys_select_h, 258 },
	{ sys_sem_h, 259 },
	{ sys_shm_h, 260 },
	{ sys_socket_h, 261 },
	{ sys_stat_h, 262 },
	{ sys_statfs_h, 263 },
	{ sys_statvfs_h, 264 },
	{ sys_time_h, 265 },
	{ sys_timeb_h, 266 },
	{ sys_times_h, 267 },
	{ sys_types_h, 268 },
	{ sys_un_h, 269 },
	{ sys_utsname_h, 270 },
	{ sys_wait_h, 271 },
	{ syslog_h, 272 },
	{ tar_h, 273 },
	{ termios_h, 274 },
	{ time_h, 275 },
	{ ucontext_h, 276 },
	{ ulimit_h, 277 },
	{ unistd_h, 278 },
	{ unwind_h, 279 },
	{ utime_h, 280 },
	{ utmp_h, 281 },
	{ utmpx_h, 282 },
	{ wchar_h, 283 },
	{ wctype_h, 284 },
	{ wordexp_h, 285 },
	{ zlib_h, 286 },
	{ NULL, 0 }
};
