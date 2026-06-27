int __cdecl sub_6F82C140(int a1, __m64 *a2, __m64 *a3, int a4)
{
  __m64 v4; // mm4@1
  __m64 v5; // mm5@1
  __m64 v6; // mm2@1
  __m64 *v7; // edx@1
  __m64 *v8; // ebx@1
  int v9; // eax@1
  __m64 v10; // mm4@1
  __m64 v11; // mm5@1
  __m64 v12; // mm0@1
  __m64 v13; // mm2@1
  __m64 *v14; // edx@1
  __m64 *v15; // ebx@1
  int v16; // eax@1
  __m64 v17; // mm4@1
  __m64 v18; // mm5@1
  __m64 v19; // mm0@1
  __m64 v20; // mm2@1
  __m64 *v21; // edx@1
  __m64 *v22; // ebx@1
  int v23; // eax@1
  __m64 v24; // mm4@1
  __m64 v25; // mm5@1
  __m64 v26; // mm2@1

  v4 = *(__m64 *)((char *)a2 + a4);
  v5 = *(__m64 *)((char *)a3 + a4);
  v6 = _m_psubw(_m_punpckhbw((__m64)a2->m64_u64, 0i64), _m_punpckhbw((__m64)a3->m64_u64, 0i64));
  v7 = (__m64 *)((char *)a2 + 2 * a4);
  v8 = (__m64 *)((char *)a3 + 2 * a4);
  *(__m64 *)a1 = _m_psubw(_m_punpcklbw((__m64)a2->m64_u64, 0i64), _m_punpcklbw((__m64)a3->m64_u64, 0i64));
  *(__m64 *)(a1 + 8) = v6;
  *(__m64 *)(a1 + 16) = _m_psubw(_m_punpcklbw(v4, 0i64), _m_punpcklbw(v5, 0i64));
  *(__m64 *)(a1 + 24) = _m_psubw(_m_punpckhbw(v4, 0i64), _m_punpckhbw(v5, 0i64));
  v9 = a1 + 32;
  v10 = *(__m64 *)((char *)v7 + a4);
  v11 = *(__m64 *)((char *)v8 + a4);
  v12 = _m_psubw(_m_punpcklbw((__m64)v7->m64_u64, 0i64), _m_punpcklbw((__m64)v8->m64_u64, 0i64));
  v13 = _m_psubw(_m_punpckhbw((__m64)v7->m64_u64, 0i64), _m_punpckhbw((__m64)v8->m64_u64, 0i64));
  v14 = (__m64 *)((char *)v7 + 2 * a4);
  v15 = (__m64 *)((char *)v8 + 2 * a4);
  *(__m64 *)v9 = v12;
  *(__m64 *)(v9 + 8) = v13;
  *(__m64 *)(v9 + 16) = _m_psubw(_m_punpcklbw(v10, 0i64), _m_punpcklbw(v11, 0i64));
  *(__m64 *)(v9 + 24) = _m_psubw(_m_punpckhbw(v10, 0i64), _m_punpckhbw(v11, 0i64));
  v16 = a1 + 64;
  v17 = *(__m64 *)((char *)v14 + a4);
  v18 = *(__m64 *)((char *)v15 + a4);
  v19 = _m_psubw(_m_punpcklbw((__m64)v14->m64_u64, 0i64), _m_punpcklbw((__m64)v15->m64_u64, 0i64));
  v20 = _m_psubw(_m_punpckhbw((__m64)v14->m64_u64, 0i64), _m_punpckhbw((__m64)v15->m64_u64, 0i64));
  v21 = (__m64 *)((char *)v14 + 2 * a4);
  v22 = (__m64 *)((char *)v15 + 2 * a4);
  *(__m64 *)v16 = v19;
  *(__m64 *)(v16 + 8) = v20;
  *(__m64 *)(v16 + 16) = _m_psubw(_m_punpcklbw(v17, 0i64), _m_punpcklbw(v18, 0i64));
  *(__m64 *)(v16 + 24) = _m_psubw(_m_punpckhbw(v17, 0i64), _m_punpckhbw(v18, 0i64));
  v23 = a1 + 96;
  v24 = *(__m64 *)((char *)v21 + a4);
  v25 = *(__m64 *)((char *)v22 + a4);
  v26 = _m_psubw(_m_punpckhbw((__m64)v21->m64_u64, 0i64), _m_punpckhbw((__m64)v22->m64_u64, 0i64));
  *(__m64 *)v23 = _m_psubw(_m_punpcklbw((__m64)v21->m64_u64, 0i64), _m_punpcklbw((__m64)v22->m64_u64, 0i64));
  *(__m64 *)(v23 + 8) = v26;
  *(__m64 *)(v23 + 16) = _m_psubw(_m_punpcklbw(v24, 0i64), _m_punpcklbw(v25, 0i64));
  *(__m64 *)(v23 + 24) = _m_psubw(_m_punpckhbw(v24, 0i64), _m_punpckhbw(v25, 0i64));
  return a1 + 128;
}
