/* Generated by ./xlat/gen.sh from ./xlat/rtnl_dcb_attrs.in; do not edit. */
#if !(defined(DCB_ATTR_UNDEFINED) || (defined(HAVE_DECL_DCB_ATTR_UNDEFINED) && HAVE_DECL_DCB_ATTR_UNDEFINED))
# define DCB_ATTR_UNDEFINED 0
#endif
#if !(defined(DCB_ATTR_IFNAME) || (defined(HAVE_DECL_DCB_ATTR_IFNAME) && HAVE_DECL_DCB_ATTR_IFNAME))
# define DCB_ATTR_IFNAME 1
#endif
#if !(defined(DCB_ATTR_STATE) || (defined(HAVE_DECL_DCB_ATTR_STATE) && HAVE_DECL_DCB_ATTR_STATE))
# define DCB_ATTR_STATE 2
#endif
#if !(defined(DCB_ATTR_PFC_STATE) || (defined(HAVE_DECL_DCB_ATTR_PFC_STATE) && HAVE_DECL_DCB_ATTR_PFC_STATE))
# define DCB_ATTR_PFC_STATE 3
#endif
#if !(defined(DCB_ATTR_PFC_CFG) || (defined(HAVE_DECL_DCB_ATTR_PFC_CFG) && HAVE_DECL_DCB_ATTR_PFC_CFG))
# define DCB_ATTR_PFC_CFG 4
#endif
#if !(defined(DCB_ATTR_NUM_TC) || (defined(HAVE_DECL_DCB_ATTR_NUM_TC) && HAVE_DECL_DCB_ATTR_NUM_TC))
# define DCB_ATTR_NUM_TC 5
#endif
#if !(defined(DCB_ATTR_PG_CFG) || (defined(HAVE_DECL_DCB_ATTR_PG_CFG) && HAVE_DECL_DCB_ATTR_PG_CFG))
# define DCB_ATTR_PG_CFG 6
#endif
#if !(defined(DCB_ATTR_SET_ALL) || (defined(HAVE_DECL_DCB_ATTR_SET_ALL) && HAVE_DECL_DCB_ATTR_SET_ALL))
# define DCB_ATTR_SET_ALL 7
#endif
#if !(defined(DCB_ATTR_PERM_HWADDR) || (defined(HAVE_DECL_DCB_ATTR_PERM_HWADDR) && HAVE_DECL_DCB_ATTR_PERM_HWADDR))
# define DCB_ATTR_PERM_HWADDR 8
#endif
#if !(defined(DCB_ATTR_CAP) || (defined(HAVE_DECL_DCB_ATTR_CAP) && HAVE_DECL_DCB_ATTR_CAP))
# define DCB_ATTR_CAP 9
#endif
#if !(defined(DCB_ATTR_NUMTCS) || (defined(HAVE_DECL_DCB_ATTR_NUMTCS) && HAVE_DECL_DCB_ATTR_NUMTCS))
# define DCB_ATTR_NUMTCS 10
#endif
#if !(defined(DCB_ATTR_BCN) || (defined(HAVE_DECL_DCB_ATTR_BCN) && HAVE_DECL_DCB_ATTR_BCN))
# define DCB_ATTR_BCN 11
#endif
#if !(defined(DCB_ATTR_APP) || (defined(HAVE_DECL_DCB_ATTR_APP) && HAVE_DECL_DCB_ATTR_APP))
# define DCB_ATTR_APP 12
#endif
#if !(defined(DCB_ATTR_IEEE) || (defined(HAVE_DECL_DCB_ATTR_IEEE) && HAVE_DECL_DCB_ATTR_IEEE))
# define DCB_ATTR_IEEE 13
#endif
#if !(defined(DCB_ATTR_DCBX) || (defined(HAVE_DECL_DCB_ATTR_DCBX) && HAVE_DECL_DCB_ATTR_DCBX))
# define DCB_ATTR_DCBX 14
#endif
#if !(defined(DCB_ATTR_FEATCFG) || (defined(HAVE_DECL_DCB_ATTR_FEATCFG) && HAVE_DECL_DCB_ATTR_FEATCFG))
# define DCB_ATTR_FEATCFG 15
#endif
#if !(defined(DCB_ATTR_CEE) || (defined(HAVE_DECL_DCB_ATTR_CEE) && HAVE_DECL_DCB_ATTR_CEE))
# define DCB_ATTR_CEE 16
#endif

#ifdef IN_MPERS

# error static const struct xlat rtnl_dcb_attrs in mpers mode

#else

static
const struct xlat rtnl_dcb_attrs[] = {
 XLAT(DCB_ATTR_UNDEFINED),
 XLAT(DCB_ATTR_IFNAME),
 XLAT(DCB_ATTR_STATE),
 XLAT(DCB_ATTR_PFC_STATE),
 XLAT(DCB_ATTR_PFC_CFG),
 XLAT(DCB_ATTR_NUM_TC),
 XLAT(DCB_ATTR_PG_CFG),
 XLAT(DCB_ATTR_SET_ALL),
 XLAT(DCB_ATTR_PERM_HWADDR),
 XLAT(DCB_ATTR_CAP),
 XLAT(DCB_ATTR_NUMTCS),
 XLAT(DCB_ATTR_BCN),
 XLAT(DCB_ATTR_APP),
 XLAT(DCB_ATTR_IEEE),
 XLAT(DCB_ATTR_DCBX),
 XLAT(DCB_ATTR_FEATCFG),
 XLAT(DCB_ATTR_CEE),
 XLAT_END
};

#endif /* !IN_MPERS */
