__m64 *__usercall sub_6F82C2B0@<eax>(__m64 a1@<mm6>, int a2, __m64 *a3, int a4)
{
  __m64 v4; // mm1@1
  __m64 v5; // mm2@1
  __m64 v6; // mm3@1
  __m64 v7; // mm6@1
  __m64 *result; // eax@1
  __m64 v9; // mm4@1
  unsigned __int64 v10; // mm0@1
  __m64 v11; // mm1@1
  __m64 v12; // mm2@1
  __m64 v13; // mm3@1

  v4 = *(__m64 *)((char *)a3 + a4);
  v5 = *(__m64 *)((char *)a3 + 2 * a4);
  v6 = *(__m64 *)((char *)a3 + 3 * a4);
  v7 = _m_psrlw(_m_psllw(_m_pcmpeqw(a1, a1), 0xFu), 8u);
  result = (__m64 *)((char *)a3 + 4 * a4);
  v9 = _m_psubw(_m_punpckhbw((__m64)a3->m64_u64, 0i64), v7);
  *(__m64 *)a2 = _m_psubw(_m_punpcklbw((__m64)a3->m64_u64, 0i64), v7);
  *(__m64 *)(a2 + 8) = v9;
  *(__m64 *)(a2 + 16) = _m_psubw(_m_punpcklbw(v4, 0i64), v7);
  *(__m64 *)(a2 + 24) = _m_psubw(_m_punpckhbw(v4, 0i64), v7);
  v10 = result->m64_u64;
  v11 = *(__m64 *)((char *)result + a4);
  *(__m64 *)(a2 + 32) = _m_psubw(_m_punpcklbw(v5, 0i64), v7);
  *(__m64 *)(a2 + 40) = _m_psubw(_m_punpckhbw(v5, 0i64), v7);
  *(__m64 *)(a2 + 48) = _m_psubw(_m_punpcklbw(v6, 0i64), v7);
  *(__m64 *)(a2 + 56) = _m_psubw(_m_punpckhbw(v6, 0i64), v7);
  v12 = *(__m64 *)((char *)result + 2 * a4);
  v13 = *(__m64 *)((char *)result + 3 * a4);
  *(__m64 *)(a2 + 64) = _m_psubw(_m_punpcklbw((__m64)v10, 0i64), v7);
  *(__m64 *)(a2 + 72) = _m_psubw(_m_punpckhbw((__m64)v10, 0i64), v7);
  *(__m64 *)(a2 + 80) = _m_psubw(_m_punpcklbw(v11, 0i64), v7);
  *(__m64 *)(a2 + 88) = _m_psubw(_m_punpckhbw(v11, 0i64), v7);
  *(__m64 *)(a2 + 96) = _m_psubw(_m_punpcklbw(v12, 0i64), v7);
  *(__m64 *)(a2 + 104) = _m_psubw(_m_punpckhbw(v12, 0i64), v7);
  *(__m64 *)(a2 + 112) = _m_psubw(_m_punpcklbw(v13, 0i64), v7);
  *(__m64 *)(a2 + 120) = _m_psubw(_m_punpckhbw(v13, 0i64), v7);
  return result;
}
