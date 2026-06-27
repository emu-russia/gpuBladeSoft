int __usercall sub_6F7AF090@<eax>(int a1@<eax>, unsigned int a2@<edx>, unsigned int a3@<ecx>, int a4, int a5)
{
  int v5; // ebp@1
  unsigned int v6; // ebx@1
  int v7; // edx@1
  int v8; // ecx@1
  int result; // eax@3
  int v10; // esi@3
  int v11; // esi@3
  int v12; // edx@3
  int v13; // edi@4
  int v14; // edx@6
  int v15; // esi@6
  int v16; // edi@6
  int v17; // eax@10
  int v18; // edx@16
  int v19; // edx@18
  int v20; // ecx@19
  signed __int64 v21; // rax@24
  int v22; // [sp+1Ch] [bp-50h]@3
  unsigned int v23; // [sp+20h] [bp-4Ch]@1
  int v24; // [sp+24h] [bp-48h]@3
  int v25; // [sp+28h] [bp-44h]@3
  int v26; // [sp+2Ch] [bp-40h]@3
  int v27; // [sp+30h] [bp-3Ch]@3
  int v28; // [sp+34h] [bp-38h]@1
  int v29; // [sp+38h] [bp-34h]@3
  int v30; // [sp+3Ch] [bp-30h]@1
  int v31; // [sp+40h] [bp-2Ch]@1
  unsigned int v32; // [sp+40h] [bp-2Ch]@6
  char v33; // [sp+47h] [bp-25h]@6
  signed int v34; // [sp+48h] [bp-24h]@6
  signed int v35; // [sp+4Ch] [bp-20h]@6

  v5 = a1;
  v6 = a2;
  v23 = a3;
  v30 = *(_DWORD *)(a1 + 8);
  v7 = 8 * a4;
  v8 = 8 * a5;
  v31 = *(_DWORD *)(v30 + 8 * a4);
  v28 = *(_DWORD *)(v30 + 8 * a5);
  if ( v31 <= *(_DWORD *)(v30 + 8 * a5) )
  {
    v28 = *(_DWORD *)(v30 + 8 * a4);
    v8 = 8 * a4;
    v31 = *(_DWORD *)(v30 + 8 * a5);
    v7 = 8 * a5;
  }
  result = *(_DWORD *)a1;
  v22 = *(_DWORD *)(*(_DWORD *)v5 + v7);
  v10 = *(_DWORD *)(v5 + 4);
  v24 = *(_DWORD *)(*(_DWORD *)v5 + v8);
  v29 = v10;
  v11 = *(_DWORD *)(v10 + v8);
  v26 = v11;
  v12 = *(_DWORD *)(v29 + v7);
  v25 = v11 - v24;
  v27 = v12 - v22;
  if ( v11 == v12 || (v13 = v31, v28 == v31) )
  {
    for ( ; v6 <= v23; ++v6 )
    {
      v19 = *(_DWORD *)(result + 8 * v6);
      if ( v24 >= v19 )
      {
        v18 = v25 + v19;
      }
      else
      {
        v20 = v19 + v27;
        if ( v22 > v19 )
          v20 = v11;
        v18 = v20;
      }
      *(_DWORD *)(v29 + 8 * v6) = v18;
    }
  }
  else if ( v23 >= v6 )
  {
    v14 = v12 - v11;
    v15 = 8 * v6;
    v32 = 0;
    v33 = 0;
    v35 = v14;
    v34 = v13 - v28;
    v16 = v29;
    while ( 1 )
    {
      v17 = *(_DWORD *)(result + v15);
      if ( v24 >= v17 )
        break;
      if ( v22 > v17 )
      {
        if ( !v33 )
        {
          v32 = sub_6F7C9760(v35, v34);
          v16 = *(_DWORD *)(v5 + 4);
          v33 = 1;
          v30 = *(_DWORD *)(v5 + 8);
        }
        v21 = (unsigned int)(((signed int)((unsigned __int64)((signed int)v32
                                                            * (signed __int64)(*(_DWORD *)(v30 + v15) - v28)) >> 32) >> 31)
                           + 0x8000)
            + (signed int)v32 * (signed __int64)(*(_DWORD *)(v30 + v15) - v28);
        result = v26 + (HIDWORD(v21) << 16) + ((unsigned int)v21 >> 16);
LABEL_8:
        *(_DWORD *)(v16 + v15) = result;
        ++v6;
        v15 += 8;
        if ( v23 < v6 )
          return result;
        goto LABEL_9;
      }
      result = v27 + v17;
      ++v6;
      *(_DWORD *)(v16 + v15) = result;
      v15 += 8;
      if ( v23 < v6 )
        return result;
LABEL_9:
      result = *(_DWORD *)v5;
    }
    result = v25 + v17;
    goto LABEL_8;
  }
  return result;
}
