signed int __cdecl sub_6F7709E0(int a1, signed int a2, signed int a3)
{
  signed int result; // eax@1
  signed int v4; // ebx@7
  int v5; // edi@7
  int v6; // eax@8
  int v7; // ecx@8
  int v8; // eax@8
  int v9; // esi@8
  int v10; // eax@8
  int v11; // ecx@8
  int v12; // eax@8
  signed int v13; // ebp@12
  int v14; // edx@13
  signed __int64 v15; // rax@14
  unsigned int v16; // ebx@14
  signed __int64 v17; // rax@14
  signed int v18; // ebx@14
  signed int v19; // eax@16
  signed __int64 v20; // rax@18
  signed int v21; // esi@18
  signed __int64 v22; // rax@18
  int v23; // esi@19
  signed __int64 v24; // rax@20
  signed int v25; // ebp@20
  signed __int64 v26; // rax@20
  int v27; // eax@21
  int v28; // edx@22
  int v29; // eax@25
  int v30; // eax@26
  unsigned int v31; // esi@27
  signed __int64 v32; // rax@28
  unsigned int v33; // ebp@28
  signed __int64 v34; // rax@28
  signed int v35; // ebp@28
  signed int v36; // ebx@30
  signed int v37; // esi@9
  int v38; // [sp+14h] [bp-78h]@11
  int v39; // [sp+18h] [bp-74h]@11
  int v40; // [sp+1Ch] [bp-70h]@25
  int v41; // [sp+20h] [bp-6Ch]@25
  int v42; // [sp+24h] [bp-68h]@26
  int v43; // [sp+28h] [bp-64h]@8
  int v44; // [sp+2Ch] [bp-60h]@11
  signed int v45; // [sp+30h] [bp-5Ch]@18
  signed int v46; // [sp+38h] [bp-54h]@12
  int v47; // [sp+3Ch] [bp-50h]@2
  int v48; // [sp+40h] [bp-4Ch]@2
  int v49; // [sp+44h] [bp-48h]@8
  signed int v50; // [sp+48h] [bp-44h]@12
  int v51; // [sp+4Ch] [bp-40h]@5
  signed int v52; // [sp+50h] [bp-3Ch]@7
  int v53; // [sp+54h] [bp-38h]@6
  int v54; // [sp+58h] [bp-34h]@8
  int v55; // [sp+5Ch] [bp-30h]@8
  int v56; // [sp+60h] [bp-2Ch]@8
  int v57; // [sp+64h] [bp-28h]@8
  int v58; // [sp+68h] [bp-24h]@12
  int v59; // [sp+6Ch] [bp-20h]@22

  result = 20;
  if ( a1 )
  {
    v47 = a2 / 2;
    v48 = a3 / 2;
    if ( !(a3 / 2 | a2 / 2) )
      return 0;
    v51 = sub_6F770840(a1);
    if ( v51 != 2 )
    {
      v53 = *(_DWORD *)(a1 + 4);
      if ( *(_WORD *)a1 > 0 )
      {
        v52 = 0;
        v4 = 0;
        v5 = 0;
        do
        {
          v43 = *(_WORD *)(*(_DWORD *)(a1 + 12) + 2 * v4);
          v6 = 8 * v5 + v53;
          v7 = *(_DWORD *)v6;
          v8 = *(_DWORD *)(v6 + 4);
          v9 = v8;
          v54 = v8;
          v10 = v53 + 8 * v43;
          v55 = v7;
          v11 = v7 - *(_DWORD *)v10;
          v57 = v9 - *(_DWORD *)(v10 + 4);
          v56 = v11;
          v12 = sub_6F7734C0((int)&v56);
          v49 = v12;
          if ( v12 )
          {
            v37 = v12;
            v56 = sub_6F7C9760(v56, v12);
            v57 = sub_6F7C9760(v57, v37);
          }
          if ( v43 >= v5 )
          {
            v44 = v53 + 8 * v5 + 8;
            v39 = v55;
            v38 = v54;
            while ( 1 )
            {
              if ( v43 <= v5 )
              {
                v40 = v54;
                v29 = v55;
                v41 = v55;
              }
              else
              {
                v41 = *(_DWORD *)v44;
                v40 = *(_DWORD *)(v44 + 4);
                v29 = *(_DWORD *)v44;
              }
              v58 = v29 - v39;
              v59 = v40 - v38;
              v30 = sub_6F7734C0((int)&v58);
              v42 = v30;
              if ( v30 )
              {
                v36 = v30;
                v58 = sub_6F7C9760(v58, v30);
                v31 = sub_6F7C9760(v59, v36);
                v59 = v31;
              }
              else
              {
                v31 = v59;
              }
              v32 = (unsigned int)(((signed int)((unsigned __int64)(v58 * (signed __int64)v56) >> 32) >> 31) + 0x8000)
                  + v58 * (signed __int64)v56;
              v33 = (HIDWORD(v32) << 16) + ((unsigned int)v32 >> 16);
              v34 = (unsigned int)(((signed int)((unsigned __int64)((signed int)v31 * (signed __int64)v57) >> 32) >> 31)
                                 + 0x8000)
                  + (signed int)v31 * (signed __int64)v57;
              v35 = (HIDWORD(v34) << 16) + ((unsigned int)v34 >> 16) + v33;
              if ( v35 >= -61439 )
              {
                v46 = v35 + 0x10000;
                v13 = v57 + v31;
                v50 = v58 + v56;
                if ( v51 )
                {
                  v50 = -v50;
                  v14 = v57;
                }
                else
                {
                  v13 = -v13;
                  v14 = v57;
                }
                v15 = (unsigned int)(((signed int)((unsigned __int64)(v14 * (signed __int64)v58) >> 32) >> 31) + 0x8000)
                    + v14 * (signed __int64)v58;
                v16 = (HIDWORD(v15) << 16) + ((unsigned int)v15 >> 16);
                v17 = (unsigned int)(((signed int)((unsigned __int64)(v56 * (signed __int64)(signed int)v31) >> 32) >> 31)
                                   + 0x8000)
                    + v56 * (signed __int64)(signed int)v31;
                v18 = v16 - ((HIDWORD(v17) << 16) + ((unsigned int)v17 >> 16));
                if ( !v51 )
                  v18 = -v18;
                v19 = v49;
                if ( v42 <= v49 )
                  v19 = v42;
                v45 = v19;
                v20 = (unsigned int)(((signed int)((unsigned __int64)(v18 * (signed __int64)v47) >> 32) >> 31) + 0x8000)
                    + v18 * (signed __int64)v47;
                v21 = (HIDWORD(v20) << 16) + ((unsigned int)v20 >> 16);
                v22 = (unsigned int)(((signed int)((unsigned __int64)(v46 * (signed __int64)v45) >> 32) >> 31) + 0x8000)
                    + v46 * (signed __int64)v45;
                v23 = (signed int)((HIDWORD(v22) << 16) + ((unsigned int)v22 >> 16)) < v21 ? sub_6F7C9420(v13, v45, v18) : sub_6F7C9420(v13, v47, v46);
                v24 = (unsigned int)(((signed int)((unsigned __int64)(v18 * (signed __int64)v48) >> 32) >> 31) + 0x8000)
                    + v18 * (signed __int64)v48;
                v25 = (HIDWORD(v24) << 16) + ((unsigned int)v24 >> 16);
                v26 = (unsigned int)(((signed int)((unsigned __int64)(v46 * (signed __int64)v45) >> 32) >> 31) + 0x8000)
                    + v46 * (signed __int64)v45;
                v27 = (signed int)((HIDWORD(v26) << 16) + ((unsigned int)v26 >> 16)) < v25 ? sub_6F7C9420(v50, v45, v18) : sub_6F7C9420(v50, v48, v46);
              }
              else
              {
                v27 = 0;
                v23 = 0;
              }
              v44 += 8;
              v28 = *(_DWORD *)(a1 + 4) + 8 * v5++;
              *(_DWORD *)v28 = v47 + v39 + v23;
              *(_DWORD *)(v28 + 4) = v48 + v38 + v27;
              v56 = v58;
              v57 = v59;
              v38 = v40;
              v39 = v41;
              if ( v43 < v5 )
                break;
              v49 = v42;
            }
          }
          v4 = ++v52;
          v5 = v43 + 1;
        }
        while ( *(_WORD *)a1 > v52 );
      }
      return 0;
    }
    result = 6;
    if ( !*(_WORD *)a1 )
      return 0;
  }
  return result;
}
