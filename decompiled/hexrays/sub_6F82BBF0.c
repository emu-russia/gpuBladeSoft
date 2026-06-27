unsigned int __usercall sub_6F82BBF0@<eax>(__m64 a1@<mm6>, unsigned int *a2, __m64 *a3, __m64 *a4, int a5, unsigned int a6)
{
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
  __m64 *v17; // ebx@1
  __m64 v18; // mm6@1
  __m64 v19; // mm0@1
  __m64 v20; // mm4@1
  __m64 v21; // mm6@1
  __m64 v22; // mm1@1
  __m64 v23; // mm5@1
  __m64 v24; // mm2@1
  __m64 *v25; // ecx@1
  __m64 v26; // mm1@1
  __m64 v27; // mm6@1
  __m64 v28; // mm0@1
  __m64 *v29; // ebx@1
  __m64 v30; // mm2@1
  __m64 v31; // mm1@1
  __m64 v32; // mm2@1
  __m64 v33; // mm3@1
  __m64 v35; // [sp+8h] [bp-4Ch]@1
  __m64 v36; // [sp+10h] [bp-44h]@1
  __m64 v37; // [sp+18h] [bp-3Ch]@1
  unsigned __int64 v38; // [sp+20h] [bp-34h]@1
  unsigned __int64 v39; // [sp+28h] [bp-2Ch]@1
  __m64 v40; // [sp+30h] [bp-24h]@1
  __m64 v41; // [sp+38h] [bp-1Ch]@1
  __m64 v42; // [sp+40h] [bp-14h]@1

  v6 = *(__m64 *)((char *)a3 + a5);
  v7 = (char *)a3 + 2 * a5;
  v8 = *(__m64 *)((char *)a4 + a5);
  v9 = (char *)a4 + 2 * a5;
  v10 = *(__m64 *)v7;
  v11 = *(__m64 *)v9;
  v12 = _m_psubb(0i64, _m_pcmpeqb(a1, a1));
  v13 = *(__m64 *)&v7[a5];
  v35 = _m_psubb(
          _m_pavgb((__m64)a3->m64_u64, (__m64)a4->m64_u64),
          _m_pand(_m_pxor((__m64)a3->m64_u64, (__m64)a4->m64_u64), v12));
  v14 = *(__m64 *)&v9[a5];
  v15 = (__m64 *)&v7[2 * a5];
  v36 = _m_psubb(_m_pavgb(v6, v8), _m_pand(_m_pxor(v6, v8), v12));
  v16 = (__m64)v15->m64_u64;
  v17 = (__m64 *)&v9[2 * a5];
  v37 = _m_psubb(_m_pavgb(v10, v11), _m_pand(_m_pxor(v10, v11), v12));
  v18 = v13;
  v19 = _m_pxor(v13, v14);
  v20 = *(__m64 *)((char *)v15 + a5);
  v21 = _m_pavgb(v18, v14);
  v22 = v16;
  v23 = *(__m64 *)((char *)v17 + a5);
  v24 = _m_pavgb(v16, (__m64)v17->m64_u64);
  v25 = (__m64 *)((char *)v15 + 2 * a5);
  v26 = _m_pxor(v22, (__m64)v17->m64_u64);
  v27 = _m_psubb(v21, _m_pand(v19, v12));
  v28 = (__m64)v25->m64_u64;
  v38 = v27.m64_u64;
  v29 = (__m64 *)((char *)v17 + 2 * a5);
  v30 = _m_psubb(v24, _m_pand(v26, v12));
  v31 = (__m64)v29->m64_u64;
  v39 = v30.m64_u64;
  v32 = *(__m64 *)((char *)v25 + a5);
  v33 = *(__m64 *)((char *)v29 + a5);
  v40 = _m_psubb(_m_pavgb(v20, v23), _m_pand(_m_pxor(v20, v23), v12));
  v41 = _m_psubb(_m_pavgb(v28, v31), _m_pand(_m_pxor(v28, v31), v12));
  v42 = _m_psubb(_m_pavgb(v32, v33), _m_pand(_m_pxor(v32, v33), v12));
  return sub_6F82B470(a2, a5, (unsigned int *)&v35, 8, a6);
}
