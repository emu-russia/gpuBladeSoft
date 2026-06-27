int __cdecl sub_6F818C70(__m64 *a1, __m64 *a2, int a3, int a4)
{
  __m64 v4; // mm7@1
  __m64 *v5; // ebx@1
  char *v6; // edx@1
  __m64 v7; // mm3@1
  __m64 v8; // mm7@1
  __m64 *v9; // ebx@1
  char *v10; // edx@1
  __m64 v11; // mm3@1
  __m64 v12; // mm7@1
  __m64 *v13; // ebx@1
  __m64 *v14; // edx@1
  int result; // eax@1
  __m64 v16; // mm7@1

  v4 = _m_packuswb(
         _m_paddsw(_m_punpcklbw(*(__m64 *)((char *)a2 + a3), 0i64), *(__m64 *)(a4 + 16)),
         _m_paddsw(_m_punpckhbw(*(__m64 *)((char *)a2 + a3), 0i64), *(__m64 *)(a4 + 24)));
  v5 = (__m64 *)((char *)a2 + 2 * a3);
  a1->m64_u64 = (unsigned __int64)_m_packuswb(
                                    _m_paddsw(_m_punpcklbw((__m64)a2->m64_u64, 0i64), *(__m64 *)a4),
                                    _m_paddsw(_m_punpckhbw((__m64)a2->m64_u64, 0i64), *(__m64 *)(a4 + 8)));
  *(__m64 *)((char *)a1 + a3) = v4;
  v6 = (char *)a1 + 2 * a3;
  v7 = _m_packuswb(
         _m_paddsw(_m_punpcklbw((__m64)v5->m64_u64, 0i64), *(__m64 *)(a4 + 32)),
         _m_paddsw(_m_punpckhbw((__m64)v5->m64_u64, 0i64), *(__m64 *)(a4 + 40)));
  v8 = _m_packuswb(
         _m_paddsw(_m_punpcklbw(*(__m64 *)((char *)v5 + a3), 0i64), *(__m64 *)(a4 + 48)),
         _m_paddsw(_m_punpckhbw(*(__m64 *)((char *)v5 + a3), 0i64), *(__m64 *)(a4 + 56)));
  v9 = (__m64 *)((char *)v5 + 2 * a3);
  *(__m64 *)v6 = v7;
  *(__m64 *)&v6[a3] = v8;
  v10 = &v6[2 * a3];
  v11 = _m_packuswb(
          _m_paddsw(_m_punpcklbw((__m64)v9->m64_u64, 0i64), *(__m64 *)(a4 + 64)),
          _m_paddsw(_m_punpckhbw((__m64)v9->m64_u64, 0i64), *(__m64 *)(a4 + 72)));
  v12 = _m_packuswb(
          _m_paddsw(_m_punpcklbw(*(__m64 *)((char *)v9 + a3), 0i64), *(__m64 *)(a4 + 80)),
          _m_paddsw(_m_punpckhbw(*(__m64 *)((char *)v9 + a3), 0i64), *(__m64 *)(a4 + 88)));
  v13 = (__m64 *)((char *)v9 + 2 * a3);
  *(__m64 *)v10 = v11;
  *(__m64 *)&v10[a3] = v12;
  v14 = (__m64 *)&v10[2 * a3];
  result = a4 + 128;
  v16 = _m_packuswb(
          _m_paddsw(_m_punpcklbw(*(__m64 *)((char *)v13 + a3), 0i64), *(__m64 *)(a4 + 112)),
          _m_paddsw(_m_punpckhbw(*(__m64 *)((char *)v13 + a3), 0i64), *(__m64 *)(a4 + 120)));
  v14->m64_u64 = (unsigned __int64)_m_packuswb(
                                     _m_paddsw(_m_punpcklbw((__m64)v13->m64_u64, 0i64), *(__m64 *)(a4 + 96)),
                                     _m_paddsw(_m_punpckhbw((__m64)v13->m64_u64, 0i64), *(__m64 *)(a4 + 104)));
  *(__m64 *)((char *)v14 + a3) = v16;
  return result;
}
