int __usercall sub_6F82C3B0@<eax>(__m64 a1@<mm6>, __m64 *a2, __m64 *a3, __m64 *a4, int a5)
{
  int result; // eax@1
  __m64 v6; // mm2@1
  char *v7; // ecx@1
  __m64 v8; // mm3@1
  char *v9; // ebx@1
  __m64 v10; // mm4@1
  __m64 v11; // mm5@1
  __m64 v12; // mm7@1
  __m64 v13; // mm0@1
  __m64 v14; // mm1@1
  __m64 *v15; // ecx@1
  __m64 v16; // mm2@1
  __m64 *v17; // edx@1
  __m64 *v18; // ebx@1
  __m64 v19; // mm6@1
  __m64 v20; // mm0@1
  __m64 v21; // mm4@1
  __m64 v22; // mm6@1
  __m64 v23; // mm1@1
  __m64 v24; // mm5@1
  __m64 v25; // mm2@1
  __m64 *v26; // ecx@1
  __m64 v27; // mm1@1
  __m64 v28; // mm6@1
  __m64 v29; // mm0@1
  __m64 *v30; // ebx@1
  unsigned __int64 *v31; // edx@1
  __m64 v32; // mm2@1
  __m64 v33; // mm1@1
  __m64 v34; // mm2@1
  __m64 v35; // mm3@1
  __m64 *v36; // edx@1

  result = a5;
  v6 = *(__m64 *)((char *)a3 + a5);
  v7 = (char *)a3 + 2 * a5;
  v8 = *(__m64 *)((char *)a4 + a5);
  v9 = (char *)a4 + 2 * a5;
  v10 = *(__m64 *)v7;
  v11 = *(__m64 *)v9;
  v12 = _m_psubb(0i64, _m_pcmpeqb(a1, a1));
  v13 = *(__m64 *)&v7[a5];
  a2->m64_u64 = (unsigned __int64)_m_psubb(
                                    _m_pavgb((__m64)a3->m64_u64, (__m64)a4->m64_u64),
                                    _m_pand(_m_pxor((__m64)a3->m64_u64, (__m64)a4->m64_u64), v12));
  v14 = *(__m64 *)&v9[a5];
  v15 = (__m64 *)&v7[2 * a5];
  *(__m64 *)((char *)a2 + a5) = _m_psubb(_m_pavgb(v6, v8), _m_pand(_m_pxor(v6, v8), v12));
  v16 = (__m64)v15->m64_u64;
  v17 = (__m64 *)((char *)a2 + 2 * a5);
  v18 = (__m64 *)&v9[2 * a5];
  v17->m64_u64 = (unsigned __int64)_m_psubb(_m_pavgb(v10, v11), _m_pand(_m_pxor(v10, v11), v12));
  v19 = v13;
  v20 = _m_pxor(v13, v14);
  v21 = *(__m64 *)((char *)v15 + a5);
  v22 = _m_pavgb(v19, v14);
  v23 = v16;
  v24 = *(__m64 *)((char *)v18 + a5);
  v25 = _m_pavgb(v16, (__m64)v18->m64_u64);
  v26 = (__m64 *)((char *)v15 + 2 * a5);
  v27 = _m_pxor(v23, (__m64)v18->m64_u64);
  v28 = _m_psubb(v22, _m_pand(v20, v12));
  v29 = (__m64)v26->m64_u64;
  *(__m64 *)((char *)v17 + a5) = v28;
  v30 = (__m64 *)((char *)v18 + 2 * a5);
  v31 = (unsigned __int64 *)((char *)v17->m64_i32 + 2 * a5);
  v32 = _m_psubb(v25, _m_pand(v27, v12));
  v33 = (__m64)v30->m64_u64;
  *v31 = v32.m64_u64;
  v34 = *(__m64 *)((char *)v26 + a5);
  v35 = *(__m64 *)((char *)v30 + a5);
  *(unsigned __int64 *)((char *)v31 + a5) = (unsigned __int64)_m_psubb(
                                                                _m_pavgb(v21, v24),
                                                                _m_pand(_m_pxor(v21, v24), v12));
  v36 = (__m64 *)((char *)v31 + 2 * a5);
  v36->m64_u64 = (unsigned __int64)_m_psubb(_m_pavgb(v29, v33), _m_pand(_m_pxor(v29, v33), v12));
  *(__m64 *)((char *)v36 + a5) = _m_psubb(_m_pavgb(v34, v35), _m_pand(_m_pxor(v34, v35), v12));
  return result;
}
