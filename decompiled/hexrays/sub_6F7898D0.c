signed int __cdecl sub_6F7898D0(int a1, int a2, unsigned int a3, int a4)
{
  signed int v4; // esi@1
  int v5; // ebx@1
  int v6; // ebp@1
  int v8; // eax@3
  int (__cdecl **v9)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // ecx@5
  int v10; // eax@5
  signed int v11; // eax@8
  signed int v12; // eax@8
  signed int v13; // eax@8
  int v14; // eax@10
  int v15; // ecx@10
  int v16; // eax@10
  signed __int64 v17; // rax@13
  signed __int64 v18; // rax@13
  int v19; // eax@14
  int v20; // ecx@14
  int v21; // edi@16
  signed int v22; // eax@16
  signed int v23; // eax@16
  int v24; // eax@16
  int v25; // ebp@17
  int v26; // edi@18
  signed __int64 v27; // rax@19
  signed __int64 v28; // rax@19
  int v29; // [sp+3Ch] [bp-640h]@5
  int v30; // [sp+44h] [bp-638h]@10
  int v31; // [sp+48h] [bp-634h]@7
  int v32; // [sp+48h] [bp-634h]@11
  int v33; // [sp+4Ch] [bp-630h]@7
  int v34; // [sp+4Ch] [bp-630h]@11
  int v35; // [sp+5Ch] [bp-620h]@10
  int v36; // [sp+60h] [bp-61Ch]@10
  int v37; // [sp+64h] [bp-618h]@7
  int v38; // [sp+68h] [bp-614h]@7
  int v39; // [sp+6Ch] [bp-610h]@7
  int v40; // [sp+70h] [bp-60Ch]@7
  int v41; // [sp+74h] [bp-608h]@14
  int v42; // [sp+78h] [bp-604h]@14
  int v43; // [sp+7Ch] [bp-600h]@14
  int v44; // [sp+80h] [bp-5FCh]@14
  char v45; // [sp+84h] [bp-5F8h]@5
  int v46; // [sp+94h] [bp-5E8h]@17
  int v47; // [sp+A4h] [bp-5D8h]@16
  int v48; // [sp+ACh] [bp-5D0h]@8
  bool v49; // [sp+C9h] [bp-5B3h]@6
  int v50; // [sp+CCh] [bp-5B0h]@12
  int v51; // [sp+5E4h] [bp-98h]@7
  int v52; // [sp+5E8h] [bp-94h]@7
  int v53; // [sp+5ECh] [bp-90h]@7
  int v54; // [sp+5F0h] [bp-8Ch]@7
  int v55; // [sp+5F4h] [bp-88h]@7
  int v56; // [sp+5F8h] [bp-84h]@7
  signed int v57; // [sp+68Ch] [bp+10h]@5

  v4 = 6;
  v5 = a1;
  v6 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(v6 + 16) > a3 )
  {
    v8 = a4 | 3;
    if ( !(a4 & 0x400) )
      v8 = a4;
    v57 = v8;
    v29 = *(_DWORD *)(v6 + 136);
    v9 = *(int (__cdecl ***)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v29 + 12);
    *(_DWORD *)(a1 + 164) = *(_DWORD *)(a2 + 16);
    v10 = *(_DWORD *)(a2 + 20);
    *(_WORD *)(a1 + 110) = 0;
    *(_WORD *)(a1 + 108) = 0;
    *(_DWORD *)(a1 + 72) = &loc_6F75746C;
    *(_DWORD *)(a1 + 168) = v10;
    v4 = (*v9)(&v45, v6, a2, a1, 0, 0, (v57 & 3) == 0, (v57 >> 16) & 0xF, sub_6F789460);
    if ( !v4 )
    {
      v49 = (v57 & 0x400) != 0;
      v4 = sub_6F789460((int)&v45, a3);
      if ( !v4 )
      {
        v37 = v51;
        v38 = v52;
        v39 = v53;
        v40 = v54;
        v33 = v55;
        v31 = v56;
        (*(void (__cdecl **)(char *))(*(_DWORD *)(v29 + 12) + 4))(&v45);
        *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 124) & 1 | 4;
        if ( v57 & 0x400 )
        {
          v21 = *(_DWORD *)(a1 + 156);
          LOWORD(v22) = sub_6F7C9390(v47);
          *(_DWORD *)(a1 + 32) = v22 >> 16;
          LOWORD(v23) = sub_6F7C9390(v48);
          *(_DWORD *)(a1 + 40) = v23 >> 16;
          *(_DWORD *)(v21 + 12) = v37;
          *(_DWORD *)(v21 + 16) = v38;
          *(_DWORD *)(v21 + 20) = v39;
          v24 = v40;
          *(_BYTE *)(v21 + 8) = 1;
          *(_DWORD *)(v21 + 24) = v24;
          *(_DWORD *)(v21 + 28) = v33;
          *(_DWORD *)(v21 + 32) = v31;
        }
        else
        {
          LOWORD(v11) = sub_6F7C9390(v48);
          *(_DWORD *)(a1 + 40) = v11 >> 16;
          LOWORD(v12) = sub_6F7C9390(v48);
          *(_DWORD *)(a1 + 56) = v12 >> 16;
          *(_BYTE *)(*(_DWORD *)(a1 + 156) + 8) = 0;
          v13 = *(_DWORD *)(v6 + 208) - *(_DWORD *)(v6 + 200);
          *(_DWORD *)(a1 + 72) = &loc_6F75746C;
          v13 >>= 16;
          *(_DWORD *)(a1 + 52) = v13;
          *(_DWORD *)(a1 + 60) = v13;
          if ( *(_WORD *)(a2 + 14) <= 0x17u )
            *(_DWORD *)(a1 + 124) |= 0x100u;
          sub_6F770750(a1 + 108, (int)&v37);
          sub_6F770420(a1 + 108, v33, v31);
          v14 = *(_DWORD *)(a1 + 40);
          v36 = 0;
          v35 = v14;
          sub_6F770690((int)&v35, (int)&v37);
          v15 = v35 + v33;
          v16 = *(_DWORD *)(a1 + 52);
          v35 = 0;
          *(_DWORD *)(a1 + 40) = v15;
          v36 = v16;
          sub_6F770690((int)&v35, (int)&v37);
          v30 = v36 + v31;
          *(_DWORD *)(a1 + 52) = v36 + v31;
          if ( !(v57 & 1) )
          {
            v32 = *(_DWORD *)(a1 + 164);
            v34 = *(_DWORD *)(a1 + 168);
            if ( v57 & 3 || !v50 )
            {
              v25 = *(_WORD *)(v46 + 2);
              if ( v25 > 0 )
              {
                v26 = *(_DWORD *)(v46 + 4);
                do
                {
                  v27 = (unsigned int)(((signed int)((unsigned __int64)(v32 * (signed __int64)*(_DWORD *)v26) >> 32) >> 31)
                                     + 0x8000)
                      + v32 * (signed __int64)*(_DWORD *)v26;
                  *(_DWORD *)v26 = (HIDWORD(v27) << 16) + ((unsigned int)v27 >> 16);
                  v28 = (unsigned int)(((signed int)((unsigned __int64)(v34 * (signed __int64)*(_DWORD *)(v26 + 4)) >> 32) >> 31)
                                     + 0x8000)
                      + v34 * (signed __int64)*(_DWORD *)(v26 + 4);
                  *(_DWORD *)(v26 + 4) = (HIDWORD(v28) << 16) + ((unsigned int)v28 >> 16);
                  v26 += 8;
                  --v25;
                }
                while ( v25 );
                v4 = 0;
                v5 = a1;
              }
            }
            v17 = (unsigned int)(((signed int)((unsigned __int64)(v32 * (signed __int64)*(_DWORD *)(v5 + 40)) >> 32) >> 31)
                               + 0x8000)
                + v32 * (signed __int64)*(_DWORD *)(v5 + 40);
            *(_DWORD *)(v5 + 40) = (HIDWORD(v17) << 16) + ((unsigned int)v17 >> 16);
            v18 = (unsigned int)(((signed int)((unsigned __int64)(v34 * (signed __int64)v30) >> 32) >> 31) + 0x8000)
                + v34 * (signed __int64)v30;
            *(_DWORD *)(v5 + 52) = (HIDWORD(v18) << 16) + ((unsigned int)v18 >> 16);
          }
          sub_6F770380(a1 + 108, (int)&v41);
          v19 = v43 - v41;
          *(_DWORD *)(v5 + 32) = v41;
          *(_DWORD *)(v5 + 24) = v19;
          v20 = v44 - v42;
          *(_DWORD *)(v5 + 36) = v44;
          *(_DWORD *)(v5 + 28) = v20;
          if ( v57 & 0x10 )
            sub_6F76C600(v5 + 24, *(_DWORD *)(v5 + 52));
        }
      }
    }
  }
  return v4;
}
