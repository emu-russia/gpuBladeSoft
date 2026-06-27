int __usercall sub_6F818BA0@<eax>(__m64 a1@<mm0>, __m64 *a2, int a3, int a4)
{
  int result; // eax@1
  char *v5; // ebx@1
  int v6; // esi@1
  __m64 v7; // mm0@1
  __m64 v8; // mm3@1
  __m64 v9; // mm5@1
  __m64 v10; // mm3@1
  __m64 v11; // mm5@1
  __m64 v12; // mm3@1

  result = a3;
  v5 = (char *)a2 + 4 * a3;
  v6 = 3 * a3;
  v7 = _m_psrlw(_m_psllw(_m_pcmpeqw(a1, a1), 0xFu), 8u);
  v8 = _m_packuswb(_m_paddsw(*(__m64 *)(a4 + 16), v7), _m_paddsw(*(__m64 *)(a4 + 24), v7));
  v9 = _m_packuswb(_m_paddsw(*(__m64 *)(a4 + 32), v7), _m_paddsw(*(__m64 *)(a4 + 40), v7));
  a2->m64_u64 = (unsigned __int64)_m_packuswb(_m_paddsw(*(__m64 *)a4, v7), _m_paddsw(*(__m64 *)(a4 + 8), v7));
  *(__m64 *)((char *)a2 + a3) = v8;
  *(__m64 *)((char *)a2 + 2 * a3) = v9;
  v10 = _m_packuswb(_m_paddsw(*(__m64 *)(a4 + 64), v7), _m_paddsw(*(__m64 *)(a4 + 72), v7));
  v11 = _m_packuswb(_m_paddsw(*(__m64 *)(a4 + 80), v7), _m_paddsw(*(__m64 *)(a4 + 88), v7));
  *(__m64 *)((char *)a2 + v6) = _m_packuswb(_m_paddsw(*(__m64 *)(a4 + 48), v7), _m_paddsw(*(__m64 *)(a4 + 56), v7));
  *(__m64 *)v5 = v10;
  *(__m64 *)&v5[a3] = v11;
  v12 = _m_packuswb(_m_paddsw(*(__m64 *)(a4 + 112), v7), _m_paddsw(*(__m64 *)(a4 + 120), v7));
  *(__m64 *)&v5[2 * a3] = _m_packuswb(_m_paddsw(*(__m64 *)(a4 + 96), v7), _m_paddsw(*(__m64 *)(a4 + 104), v7));
  *(__m64 *)&v5[v6] = v12;
  return result;
}
