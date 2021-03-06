/* Generated by ./xlat/gen.sh from ./xlat/v4l2_vbi_flags.in; do not edit. */

#ifdef IN_MPERS

extern const struct xlat v4l2_vbi_flags[];

#else

# if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
# endif
const struct xlat v4l2_vbi_flags[] = {
#if defined(V4L2_VBI_UNSYNC) || (defined(HAVE_DECL_V4L2_VBI_UNSYNC) && HAVE_DECL_V4L2_VBI_UNSYNC)
  XLAT(V4L2_VBI_UNSYNC),
#endif
#if defined(V4L2_VBI_INTERLACED) || (defined(HAVE_DECL_V4L2_VBI_INTERLACED) && HAVE_DECL_V4L2_VBI_INTERLACED)
  XLAT(V4L2_VBI_INTERLACED),
#endif
#if defined(V4L2_VBI_ITU_525_F1_START) || (defined(HAVE_DECL_V4L2_VBI_ITU_525_F1_START) && HAVE_DECL_V4L2_VBI_ITU_525_F1_START)
  XLAT(V4L2_VBI_ITU_525_F1_START),
#endif
#if defined(V4L2_VBI_ITU_525_F2_START) || (defined(HAVE_DECL_V4L2_VBI_ITU_525_F2_START) && HAVE_DECL_V4L2_VBI_ITU_525_F2_START)
  XLAT(V4L2_VBI_ITU_525_F2_START),
#endif
#if defined(V4L2_VBI_ITU_625_F1_START) || (defined(HAVE_DECL_V4L2_VBI_ITU_625_F1_START) && HAVE_DECL_V4L2_VBI_ITU_625_F1_START)
  XLAT(V4L2_VBI_ITU_625_F1_START),
#endif
#if defined(V4L2_VBI_ITU_625_F2_START) || (defined(HAVE_DECL_V4L2_VBI_ITU_625_F2_START) && HAVE_DECL_V4L2_VBI_ITU_625_F2_START)
  XLAT(V4L2_VBI_ITU_625_F2_START),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
