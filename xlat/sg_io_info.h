/* Generated by ./xlat/gen.sh from ./xlat/sg_io_info.in; do not edit. */
#if !(defined(SG_INFO_CHECK) || (defined(HAVE_DECL_SG_INFO_CHECK) && HAVE_DECL_SG_INFO_CHECK))
# define SG_INFO_CHECK 1
#endif
#if !(defined(SG_INFO_DIRECT_IO) || (defined(HAVE_DECL_SG_INFO_DIRECT_IO) && HAVE_DECL_SG_INFO_DIRECT_IO))
# define SG_INFO_DIRECT_IO 2
#endif
#if !(defined(SG_INFO_MIXED_IO) || (defined(HAVE_DECL_SG_INFO_MIXED_IO) && HAVE_DECL_SG_INFO_MIXED_IO))
# define SG_INFO_MIXED_IO 4
#endif

#ifndef IN_MPERS

const struct xlat sg_io_info[] = {
 XLAT(SG_INFO_CHECK),
 XLAT(SG_INFO_DIRECT_IO),
 XLAT(SG_INFO_MIXED_IO),
 XLAT_END
};

#endif /* !IN_MPERS */
