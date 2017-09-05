/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc/config/aarch64/aarch64.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern int general_operand (rtx, machine_mode);
extern int address_operand (rtx, machine_mode);
extern int register_operand (rtx, machine_mode);
extern int pmode_register_operand (rtx, machine_mode);
extern int scratch_operand (rtx, machine_mode);
extern int immediate_operand (rtx, machine_mode);
extern int const_int_operand (rtx, machine_mode);
extern int const_scalar_int_operand (rtx, machine_mode);
extern int const_double_operand (rtx, machine_mode);
extern int nonimmediate_operand (rtx, machine_mode);
extern int nonmemory_operand (rtx, machine_mode);
extern int push_operand (rtx, machine_mode);
extern int pop_operand (rtx, machine_mode);
extern int memory_operand (rtx, machine_mode);
extern int indirect_operand (rtx, machine_mode);
extern int ordered_comparison_operator (rtx, machine_mode);
extern int comparison_operator (rtx, machine_mode);
extern int cc_register (rtx, machine_mode);
extern int aarch64_call_insn_operand (rtx, machine_mode);
extern int const0_operand (rtx, machine_mode);
extern int aarch64_ccmp_immediate (rtx, machine_mode);
extern int aarch64_ccmp_operand (rtx, machine_mode);
extern int ccmp_cc_register (rtx, machine_mode);
extern int aarch64_simd_register (rtx, machine_mode);
extern int aarch64_reg_or_zero (rtx, machine_mode);
extern int aarch64_reg_or_fp_zero (rtx, machine_mode);
extern int aarch64_reg_zero_or_m1_or_1 (rtx, machine_mode);
extern int aarch64_fp_compare_operand (rtx, machine_mode);
extern int aarch64_plus_immediate (rtx, machine_mode);
extern int aarch64_plus_operand (rtx, machine_mode);
extern int aarch64_pluslong_immediate (rtx, machine_mode);
extern int aarch64_pluslong_operand (rtx, machine_mode);
extern int aarch64_logical_immediate (rtx, machine_mode);
extern int aarch64_logical_operand (rtx, machine_mode);
extern int aarch64_shift_imm_si (rtx, machine_mode);
extern int aarch64_shift_imm_di (rtx, machine_mode);
extern int aarch64_shift_imm64_di (rtx, machine_mode);
extern int aarch64_reg_or_shift_imm_si (rtx, machine_mode);
extern int aarch64_reg_or_shift_imm_di (rtx, machine_mode);
extern int aarch64_imm3 (rtx, machine_mode);
extern int aarch64_pwr_imm3 (rtx, machine_mode);
extern int aarch64_pwr_2_si (rtx, machine_mode);
extern int aarch64_pwr_2_di (rtx, machine_mode);
extern int aarch64_mem_pair_offset (rtx, machine_mode);
extern int aarch64_mem_pair_operand (rtx, machine_mode);
extern int aarch64_valid_symref (rtx, machine_mode);
extern int aarch64_tls_ie_symref (rtx, machine_mode);
extern int aarch64_tls_le_symref (rtx, machine_mode);
extern int aarch64_mov_operand (rtx, machine_mode);
extern int aarch64_movti_operand (rtx, machine_mode);
extern int aarch64_reg_or_imm (rtx, machine_mode);
extern int aarch64_comparison_operator (rtx, machine_mode);
extern int aarch64_comparison_operation (rtx, machine_mode);
extern int aarch64_sync_memory_operand (rtx, machine_mode);
extern int vect_par_cnst_hi_half (rtx, machine_mode);
extern int vect_par_cnst_lo_half (rtx, machine_mode);
extern int aarch64_simd_lshift_imm (rtx, machine_mode);
extern int aarch64_simd_rshift_imm (rtx, machine_mode);
extern int aarch64_simd_reg_or_zero (rtx, machine_mode);
extern int aarch64_simd_struct_operand (rtx, machine_mode);
extern int aarch64_simd_general_operand (rtx, machine_mode);
extern int aarch64_simd_nonimmediate_operand (rtx, machine_mode);
extern int aarch64_simd_imm_zero (rtx, machine_mode);
extern int aarch64_simd_imm_minus_one (rtx, machine_mode);
extern int aarch64_simd_shift_imm_qi (rtx, machine_mode);
extern int aarch64_simd_shift_imm_hi (rtx, machine_mode);
extern int aarch64_simd_shift_imm_si (rtx, machine_mode);
extern int aarch64_simd_shift_imm_di (rtx, machine_mode);
extern int aarch64_simd_shift_imm_offset_qi (rtx, machine_mode);
extern int aarch64_simd_shift_imm_offset_hi (rtx, machine_mode);
extern int aarch64_simd_shift_imm_offset_si (rtx, machine_mode);
extern int aarch64_simd_shift_imm_offset_di (rtx, machine_mode);
extern int aarch64_simd_shift_imm_bitsize_qi (rtx, machine_mode);
extern int aarch64_simd_shift_imm_bitsize_hi (rtx, machine_mode);
extern int aarch64_simd_shift_imm_bitsize_si (rtx, machine_mode);
extern int aarch64_simd_shift_imm_bitsize_di (rtx, machine_mode);
#endif /* HAVE_MACHINE_MODES */

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_r,
  CONSTRAINT_k,
  CONSTRAINT_Ucs,
  CONSTRAINT_w,
  CONSTRAINT_x,
  CONSTRAINT_I,
  CONSTRAINT_J,
  CONSTRAINT_K,
  CONSTRAINT_L,
  CONSTRAINT_M,
  CONSTRAINT_N,
  CONSTRAINT_m,
  CONSTRAINT_o,
  CONSTRAINT_Q,
  CONSTRAINT_Ump,
  CONSTRAINT_Utv,
  CONSTRAINT_p,
  CONSTRAINT_V,
  CONSTRAINT__l,
  CONSTRAINT__g,
  CONSTRAINT_i,
  CONSTRAINT_s,
  CONSTRAINT_n,
  CONSTRAINT_E,
  CONSTRAINT_F,
  CONSTRAINT_X,
  CONSTRAINT_S,
  CONSTRAINT_Y,
  CONSTRAINT_Z,
  CONSTRAINT_Ush,
  CONSTRAINT_Uss,
  CONSTRAINT_Usn,
  CONSTRAINT_Usd,
  CONSTRAINT_Usf,
  CONSTRAINT_UsM,
  CONSTRAINT_Ui1,
  CONSTRAINT_Ui3,
  CONSTRAINT_Up3,
  CONSTRAINT_Ufc,
  CONSTRAINT_Dn,
  CONSTRAINT_Dh,
  CONSTRAINT_Dq,
  CONSTRAINT_Dl,
  CONSTRAINT_Dr,
  CONSTRAINT_Dz,
  CONSTRAINT_Dd,
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
  return c >= CONSTRAINT_r && c <= CONSTRAINT_x;
}

static inline bool
insn_extra_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_m && c <= CONSTRAINT_Utv;
}

static inline bool
insn_extra_address_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_p && c <= CONSTRAINT_p;
}

static inline size_t
insn_constraint_len (char fc, const char *str ATTRIBUTE_UNUSED)
{
  switch (fc)
    {
    case 'D': return 2;
    case 'U': return 3;
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
  CT_ADDRESS,
  CT_FIXED_FORM
};

static inline enum constraint_type
get_constraint_type (enum constraint_num c)
{
  if (c >= CONSTRAINT_p)
    {
      if (c >= CONSTRAINT_V)
        return CT_FIXED_FORM;
      return CT_ADDRESS;
    }
  if (c >= CONSTRAINT_m)
    return CT_MEMORY;
  if (c >= CONSTRAINT_I)
    return CT_CONST_INT;
  return CT_REGISTER;
}
#endif /* tm-preds.h */
