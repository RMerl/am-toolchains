/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc/config/aarch64/aarch64.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern bool general_operand (rtx, machine_mode);
extern bool address_operand (rtx, machine_mode);
extern bool register_operand (rtx, machine_mode);
extern bool pmode_register_operand (rtx, machine_mode);
extern bool scratch_operand (rtx, machine_mode);
extern bool immediate_operand (rtx, machine_mode);
extern bool const_int_operand (rtx, machine_mode);
extern bool const_scalar_int_operand (rtx, machine_mode);
extern bool const_double_operand (rtx, machine_mode);
extern bool nonimmediate_operand (rtx, machine_mode);
extern bool nonmemory_operand (rtx, machine_mode);
extern bool push_operand (rtx, machine_mode);
extern bool pop_operand (rtx, machine_mode);
extern bool memory_operand (rtx, machine_mode);
extern bool indirect_operand (rtx, machine_mode);
extern bool ordered_comparison_operator (rtx, machine_mode);
extern bool comparison_operator (rtx, machine_mode);
extern bool const_1_to_4_operand (rtx, machine_mode);
extern bool const_2_4_8_16_operand (rtx, machine_mode);
extern bool alu_shift_operator_lsl_1_to_4 (rtx, machine_mode);
extern bool alu_shift_reg_p (rtx, machine_mode);
extern bool cc_register (rtx, machine_mode);
extern bool aarch64_call_insn_operand (rtx, machine_mode);
extern bool aarch64_general_reg (rtx, machine_mode);
extern bool const0_operand (rtx, machine_mode);
extern bool const_1_to_3_operand (rtx, machine_mode);
extern bool subreg_lowpart_operator (rtx, machine_mode);
extern bool aarch64_ccmp_immediate (rtx, machine_mode);
extern bool aarch64_ccmp_operand (rtx, machine_mode);
extern bool aarch64_simd_register (rtx, machine_mode);
extern bool aarch64_reg_or_zero (rtx, machine_mode);
extern bool aarch64_reg_or_fp_zero (rtx, machine_mode);
extern bool aarch64_reg_zero_or_fp_zero (rtx, machine_mode);
extern bool aarch64_reg_zero_or_m1_or_1 (rtx, machine_mode);
extern bool aarch64_reg_or_orr_imm (rtx, machine_mode);
extern bool aarch64_reg_or_bic_imm (rtx, machine_mode);
extern bool aarch64_fp_compare_operand (rtx, machine_mode);
extern bool aarch64_fp_pow2 (rtx, machine_mode);
extern bool aarch64_fp_pow2_recip (rtx, machine_mode);
extern bool aarch64_fp_vec_pow2 (rtx, machine_mode);
extern bool aarch64_sve_cnt_immediate (rtx, machine_mode);
extern bool aarch64_sub_immediate (rtx, machine_mode);
extern bool aarch64_plus_immediate (rtx, machine_mode);
extern bool aarch64_plus_operand (rtx, machine_mode);
extern bool aarch64_plushi_immediate (rtx, machine_mode);
extern bool aarch64_plushi_operand (rtx, machine_mode);
extern bool aarch64_pluslong_immediate (rtx, machine_mode);
extern bool aarch64_sminmax_immediate (rtx, machine_mode);
extern bool aarch64_sminmax_operand (rtx, machine_mode);
extern bool aarch64_uminmax_immediate (rtx, machine_mode);
extern bool aarch64_uminmax_operand (rtx, machine_mode);
extern bool aarch64_pluslong_strict_immedate (rtx, machine_mode);
extern bool aarch64_sve_scalar_inc_dec_immediate (rtx, machine_mode);
extern bool aarch64_sve_addvl_addpl_immediate (rtx, machine_mode);
extern bool aarch64_sve_plus_immediate (rtx, machine_mode);
extern bool aarch64_split_add_offset_immediate (rtx, machine_mode);
extern bool aarch64_pluslong_operand (rtx, machine_mode);
extern bool aarch64_pluslong_or_poly_operand (rtx, machine_mode);
extern bool aarch64_logical_immediate (rtx, machine_mode);
extern bool aarch64_logical_operand (rtx, machine_mode);
extern bool aarch64_mov_imm_operand (rtx, machine_mode);
extern bool aarch64_logical_and_immediate (rtx, machine_mode);
extern bool aarch64_shift_imm_si (rtx, machine_mode);
extern bool aarch64_shift_imm_di (rtx, machine_mode);
extern bool aarch64_shift_imm64_di (rtx, machine_mode);
extern bool aarch64_reg_or_shift_imm_si (rtx, machine_mode);
extern bool aarch64_reg_or_shift_imm_di (rtx, machine_mode);
extern bool aarch64_imm3 (rtx, machine_mode);
extern bool aarch64_imm2 (rtx, machine_mode);
extern bool aarch64_lane_imm3 (rtx, machine_mode);
extern bool aarch64_imm24 (rtx, machine_mode);
extern bool aarch64_mem_pair_offset (rtx, machine_mode);
extern bool aarch64_mem_pair_operand (rtx, machine_mode);
extern bool aarch64_mem_pair_lanes_operand (rtx, machine_mode);
extern bool aarch64_reg_or_mem_pair_operand (rtx, machine_mode);
extern bool aarch64_prefetch_operand (rtx, machine_mode);
extern bool aarch64_valid_symref (rtx, machine_mode);
extern bool aarch64_tls_ie_symref (rtx, machine_mode);
extern bool aarch64_tls_le_symref (rtx, machine_mode);
extern bool aarch64_mov_operand (rtx, machine_mode);
extern bool aarch64_nonmemory_operand (rtx, machine_mode);
extern bool aarch64_movti_operand (rtx, machine_mode);
extern bool aarch64_reg_or_imm (rtx, machine_mode);
extern bool aarch64_comparison_operator (rtx, machine_mode);
extern bool aarch64_comparison_operator_mode (rtx, machine_mode);
extern bool aarch64_comparison_operation (rtx, machine_mode);
extern bool aarch64_equality_operator (rtx, machine_mode);
extern bool aarch64_carry_operation (rtx, machine_mode);
extern bool aarch64_borrow_operation (rtx, machine_mode);
extern bool aarch64_sync_memory_operand (rtx, machine_mode);
extern bool aarch64_9bit_offset_memory_operand (rtx, machine_mode);
extern bool aarch64_rcpc_memory_operand (rtx, machine_mode);
extern bool vect_par_cnst_hi_half (rtx, machine_mode);
extern bool vect_par_cnst_lo_half (rtx, machine_mode);
extern bool descending_int_parallel (rtx, machine_mode);
extern bool ascending_int_parallel (rtx, machine_mode);
extern bool aarch64_simd_lshift_imm (rtx, machine_mode);
extern bool aarch64_simd_rshift_imm (rtx, machine_mode);
extern bool aarch64_simd_imm_zero (rtx, machine_mode);
extern bool aarch64_simd_imm_one (rtx, machine_mode);
extern bool aarch64_simd_or_scalar_imm_zero (rtx, machine_mode);
extern bool aarch64_simd_imm_minus_one (rtx, machine_mode);
extern bool aarch64_simd_reg_or_zero (rtx, machine_mode);
extern bool aarch64_simd_reg_or_minus_one (rtx, machine_mode);
extern bool aarch64_simd_struct_operand (rtx, machine_mode);
extern bool aarch64_simd_general_operand (rtx, machine_mode);
extern bool aarch64_simd_nonimmediate_operand (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_qi (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_hi (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_si (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_di (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_offset_qi (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_offset_hi (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_offset_si (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_offset_di (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_vec_exact_top (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_vec_qi (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_vec_hi (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_vec_si (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_vec_di (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_bitsize_qi (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_bitsize_hi (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_bitsize_si (rtx, machine_mode);
extern bool aarch64_simd_shift_imm_bitsize_di (rtx, machine_mode);
extern bool aarch64_constant_pool_symref (rtx, machine_mode);
extern bool aarch64_constant_vector_operand (rtx, machine_mode);
extern bool aarch64_sve_ld1r_operand (rtx, machine_mode);
extern bool aarch64_sve_ld1rq_operand (rtx, machine_mode);
extern bool aarch64_sve_ld1ro_operand_b (rtx, machine_mode);
extern bool aarch64_sve_ld1ro_operand_h (rtx, machine_mode);
extern bool aarch64_sve_ld1ro_operand_w (rtx, machine_mode);
extern bool aarch64_sve_ld1ro_operand_d (rtx, machine_mode);
extern bool aarch64_sve_ldff1_operand (rtx, machine_mode);
extern bool aarch64_sve_ldnf1_operand (rtx, machine_mode);
extern bool aarch64_sve_ldr_operand (rtx, machine_mode);
extern bool aarch64_sve_prefetch_operand (rtx, machine_mode);
extern bool aarch64_sve_nonimmediate_operand (rtx, machine_mode);
extern bool aarch64_sve_general_operand (rtx, machine_mode);
extern bool aarch64_sve_struct_memory_operand (rtx, machine_mode);
extern bool aarch64_sve_struct_nonimmediate_operand (rtx, machine_mode);
extern bool aarch64_sve_dup_operand (rtx, machine_mode);
extern bool aarch64_sve_dup_ld1rq_operand (rtx, machine_mode);
extern bool aarch64_sve_ptrue_svpattern_immediate (rtx, machine_mode);
extern bool aarch64_sve_arith_immediate (rtx, machine_mode);
extern bool aarch64_sve_sub_arith_immediate (rtx, machine_mode);
extern bool aarch64_sve_qadd_immediate (rtx, machine_mode);
extern bool aarch64_sve_qsub_immediate (rtx, machine_mode);
extern bool aarch64_sve_vector_inc_dec_immediate (rtx, machine_mode);
extern bool aarch64_sve_gather_immediate_b (rtx, machine_mode);
extern bool aarch64_sve_gather_immediate_h (rtx, machine_mode);
extern bool aarch64_sve_gather_immediate_w (rtx, machine_mode);
extern bool aarch64_sve_gather_immediate_d (rtx, machine_mode);
extern bool aarch64_sve_uxtb_immediate (rtx, machine_mode);
extern bool aarch64_sve_uxth_immediate (rtx, machine_mode);
extern bool aarch64_sve_uxtw_immediate (rtx, machine_mode);
extern bool aarch64_sve_uxt_immediate (rtx, machine_mode);
extern bool aarch64_sve_logical_immediate (rtx, machine_mode);
extern bool aarch64_sve_vsb_immediate (rtx, machine_mode);
extern bool aarch64_sve_vsm_immediate (rtx, machine_mode);
extern bool aarch64_sve_dup_immediate (rtx, machine_mode);
extern bool aarch64_sve_cmp_vsc_immediate (rtx, machine_mode);
extern bool aarch64_sve_cmp_vsd_immediate (rtx, machine_mode);
extern bool aarch64_sve_index_immediate (rtx, machine_mode);
extern bool aarch64_sve_float_arith_immediate (rtx, machine_mode);
extern bool aarch64_sve_float_negated_arith_immediate (rtx, machine_mode);
extern bool aarch64_sve_float_arith_with_sub_immediate (rtx, machine_mode);
extern bool aarch64_sve_float_mul_immediate (rtx, machine_mode);
extern bool aarch64_sve_float_maxmin_immediate (rtx, machine_mode);
extern bool aarch64_sve_arith_operand (rtx, machine_mode);
extern bool aarch64_sve_add_operand (rtx, machine_mode);
extern bool aarch64_sve_sqadd_operand (rtx, machine_mode);
extern bool aarch64_sve_pred_and_operand (rtx, machine_mode);
extern bool aarch64_sve_logical_operand (rtx, machine_mode);
extern bool aarch64_sve_gather_offset_b (rtx, machine_mode);
extern bool aarch64_sve_gather_offset_h (rtx, machine_mode);
extern bool aarch64_sve_gather_offset_w (rtx, machine_mode);
extern bool aarch64_sve_gather_offset_d (rtx, machine_mode);
extern bool aarch64_sve_lshift_operand (rtx, machine_mode);
extern bool aarch64_sve_rshift_operand (rtx, machine_mode);
extern bool aarch64_sve_vsb_operand (rtx, machine_mode);
extern bool aarch64_sve_vsm_operand (rtx, machine_mode);
extern bool aarch64_sve_reg_or_dup_imm (rtx, machine_mode);
extern bool aarch64_sve_cmp_vsc_operand (rtx, machine_mode);
extern bool aarch64_sve_cmp_vsd_operand (rtx, machine_mode);
extern bool aarch64_sve_index_operand (rtx, machine_mode);
extern bool aarch64_sve_float_arith_operand (rtx, machine_mode);
extern bool aarch64_sve_float_arith_with_sub_operand (rtx, machine_mode);
extern bool aarch64_sve_float_mul_operand (rtx, machine_mode);
extern bool aarch64_sve_float_maxmin_operand (rtx, machine_mode);
extern bool aarch64_sve_vec_perm_operand (rtx, machine_mode);
extern bool aarch64_sve_ptrue_flag (rtx, machine_mode);
extern bool aarch64_sve_gp_strictness (rtx, machine_mode);
extern bool aarch64_gather_scale_operand_b (rtx, machine_mode);
extern bool aarch64_gather_scale_operand_h (rtx, machine_mode);
extern bool aarch64_gather_scale_operand_w (rtx, machine_mode);
extern bool aarch64_gather_scale_operand_d (rtx, machine_mode);
extern bool aarch64_any_register_operand (rtx, machine_mode);
extern bool aarch64_sve_any_binary_operator (rtx, machine_mode);
extern bool aarch64_bytes_per_sve_vector_operand (rtx, machine_mode);
extern bool aarch64_memtag_tag_offset (rtx, machine_mode);
extern bool aarch64_granule16_uimm6 (rtx, machine_mode);
extern bool aarch64_granule16_simm9 (rtx, machine_mode);
#endif /* HAVE_MACHINE_MODES */

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_r,
  CONSTRAINT_k,
  CONSTRAINT_Ucs,
  CONSTRAINT_Ucr,
  CONSTRAINT_w,
  CONSTRAINT_Upa,
  CONSTRAINT_Upl,
  CONSTRAINT_x,
  CONSTRAINT_y,
  CONSTRAINT_I,
  CONSTRAINT_J,
  CONSTRAINT_K,
  CONSTRAINT_L,
  CONSTRAINT_M,
  CONSTRAINT_N,
  CONSTRAINT_O,
  CONSTRAINT_m,
  CONSTRAINT_o,
  CONSTRAINT_Q,
  CONSTRAINT_Ust,
  CONSTRAINT_Ump,
  CONSTRAINT_Umn,
  CONSTRAINT_Utf,
  CONSTRAINT_Utn,
  CONSTRAINT_Utr,
  CONSTRAINT_Utv,
  CONSTRAINT_Utx,
  CONSTRAINT_Utq,
  CONSTRAINT_UtQ,
  CONSTRAINT_UOb,
  CONSTRAINT_UOh,
  CONSTRAINT_UOw,
  CONSTRAINT_UOd,
  CONSTRAINT_Uty,
  CONSTRAINT_p,
  CONSTRAINT_UPb,
  CONSTRAINT_UPd,
  CONSTRAINT_UPh,
  CONSTRAINT_UPw,
  CONSTRAINT_Dp,
  CONSTRAINT_Uaa,
  CONSTRAINT_Uai,
  CONSTRAINT_Uav,
  CONSTRAINT_Uat,
  CONSTRAINT_Uti,
  CONSTRAINT_UsO,
  CONSTRAINT_UsP,
  CONSTRAINT_S,
  CONSTRAINT_Y,
  CONSTRAINT_Ush,
  CONSTRAINT_Usa,
  CONSTRAINT_Usm,
  CONSTRAINT_Usw,
  CONSTRAINT_Uss,
  CONSTRAINT_Usn,
  CONSTRAINT_Usd,
  CONSTRAINT_Usf,
  CONSTRAINT_Usg,
  CONSTRAINT_Usj,
  CONSTRAINT_Ulc,
  CONSTRAINT_Usv,
  CONSTRAINT_Usi,
  CONSTRAINT_Ui2,
  CONSTRAINT_Ui3,
  CONSTRAINT_Ui7,
  CONSTRAINT_Up3,
  CONSTRAINT_Uph,
  CONSTRAINT_Ufc,
  CONSTRAINT_Uum,
  CONSTRAINT_Uvi,
  CONSTRAINT_Do,
  CONSTRAINT_Db,
  CONSTRAINT_Dn,
  CONSTRAINT_Dh,
  CONSTRAINT_Dq,
  CONSTRAINT_Dt,
  CONSTRAINT_Dl,
  CONSTRAINT_D1,
  CONSTRAINT_Dr,
  CONSTRAINT_Dz,
  CONSTRAINT_Dm,
  CONSTRAINT_Dd,
  CONSTRAINT_Ds,
  CONSTRAINT_vgb,
  CONSTRAINT_vgd,
  CONSTRAINT_vgh,
  CONSTRAINT_vgw,
  CONSTRAINT_vsa,
  CONSTRAINT_vsb,
  CONSTRAINT_vsc,
  CONSTRAINT_vsd,
  CONSTRAINT_vsi,
  CONSTRAINT_vsn,
  CONSTRAINT_vsQ,
  CONSTRAINT_vsS,
  CONSTRAINT_vsl,
  CONSTRAINT_vsm,
  CONSTRAINT_vsA,
  CONSTRAINT_vsB,
  CONSTRAINT_vsM,
  CONSTRAINT_vsN,
  CONSTRAINT_c,
  CONSTRAINT_V,
  CONSTRAINT__l,
  CONSTRAINT__g,
  CONSTRAINT_i,
  CONSTRAINT_s,
  CONSTRAINT_n,
  CONSTRAINT_E,
  CONSTRAINT_F,
  CONSTRAINT_X,
  CONSTRAINT_Z,
  CONSTRAINT_UsM,
  CONSTRAINT_Ui1,
  CONSTRAINT_vss,
  CONSTRAINT__LIMIT
};

extern enum constraint_num lookup_constraint_1 (const char *);
extern const unsigned char lookup_constraint_array[];

/* Return the constraint at the beginning of P, or CONSTRAINT__UNKNOWN if it
   isn't recognized.  */

static inline enum constraint_num
lookup_constraint (const char *p)
{
  unsigned int index = lookup_constraint_array[(unsigned char) *p];
  return (index == UCHAR_MAX
          ? lookup_constraint_1 (p)
          : (enum constraint_num) index);
}

extern bool (*constraint_satisfied_p_array[]) (rtx);

/* Return true if X satisfies constraint C.  */

static inline bool
constraint_satisfied_p (rtx x, enum constraint_num c)
{
  int i = (int) c - (int) CONSTRAINT_I;
  return i >= 0 && constraint_satisfied_p_array[i] (x);
}

static inline bool
insn_extra_register_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_r && c <= CONSTRAINT_y;
}

static inline bool
insn_extra_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_m && c <= CONSTRAINT_Utx;
}

static inline bool
insn_extra_special_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_relaxed_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_Utq && c <= CONSTRAINT_Uty;
}

static inline bool
insn_extra_address_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_p && c <= CONSTRAINT_Dp;
}

static inline void
insn_extra_constraint_allows_reg_mem (enum constraint_num c,
				      bool *allows_reg, bool *allows_mem)
{
  if (c >= CONSTRAINT_Uaa && c <= CONSTRAINT_vsN)
    return;
  if (c >= CONSTRAINT_c && c <= CONSTRAINT_c)
    {
      *allows_reg = true;
      return;
    }
  if (c >= CONSTRAINT_V && c <= CONSTRAINT__g)
    {
      *allows_mem = true;
      return;
    }
  (void) c;
  *allows_reg = true;
  *allows_mem = true;
}

static inline size_t
insn_constraint_len (char fc, const char *str ATTRIBUTE_UNUSED)
{
  switch (fc)
    {
    case 'D': return 2;
    case 'U': return 3;
    case 'v': return 3;
    default: break;
    }
  return 1;
}

#define CONSTRAINT_LEN(c_,s_) insn_constraint_len (c_,s_)

extern enum reg_class reg_class_for_constraint_1 (enum constraint_num);

static inline enum reg_class
reg_class_for_constraint (enum constraint_num c)
{
  if (insn_extra_register_constraint (c))
    return reg_class_for_constraint_1 (c);
  return NO_REGS;
}

extern bool insn_const_int_ok_for_constraint (HOST_WIDE_INT, enum constraint_num);
#define CONST_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    insn_const_int_ok_for_constraint (v_, lookup_constraint (s_))

enum constraint_type
{
  CT_REGISTER,
  CT_CONST_INT,
  CT_MEMORY,
  CT_SPECIAL_MEMORY,
  CT_RELAXED_MEMORY,
  CT_ADDRESS,
  CT_FIXED_FORM
};

static inline enum constraint_type
get_constraint_type (enum constraint_num c)
{
  if (c >= CONSTRAINT_Utq)
    {
      if (c >= CONSTRAINT_Uaa)
        return CT_FIXED_FORM;
      if (c >= CONSTRAINT_p)
        return CT_ADDRESS;
      return CT_RELAXED_MEMORY;
    }
  if (c >= CONSTRAINT_m)
    return CT_MEMORY;
  if (c >= CONSTRAINT_I)
    return CT_CONST_INT;
  return CT_REGISTER;
}
#endif /* tm-preds.h */
