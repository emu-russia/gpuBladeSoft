_DWORD *__usercall sub_6F779FA0@<eax>(int a1@<eax>, _DWORD *a2@<edx>, _DWORD *a3@<ecx>)
{
  int v3; // ebx@1
  unsigned int v4; // esi@3
  unsigned int v5; // edi@3
  int v6; // ebp@4
  unsigned int v7; // ecx@4
  int v8; // edx@4
  _DWORD *result; // eax@4
  _DWORD *v10; // edi@8
  int v11; // edi@11
  signed __int64 v12; // rax@11
  unsigned int v13; // edx@14
  int v14; // ebp@15
  int v15; // edi@18
  int v16; // eax@19
  int v17; // ebp@19
  int v18; // eax@19
  int v19; // ecx@19
  int v20; // ebx@20
  int v21; // edx@20
  int v22; // eax@22
  int v23; // eax@23
  _DWORD *v24; // [sp+0h] [bp-24h]@2
  bool v25; // [sp+7h] [bp-1Dh]@2
  _DWORD *v26; // [sp+8h] [bp-1Ch]@1
  unsigned int v27; // [sp+Ch] [bp-18h]@15
  int v28; // [sp+10h] [bp-14h]@19

  v3 = a1;
  v26 = a3;
  if ( *a2 )
  {
    v24 = a2;
    v25 = *a3 != 0;
  }
  else
  {
    v24 = a3;
    v25 = 0;
  }
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 20);
  if ( !v4 )
  {
    result = *(_DWORD **)(a1 + 4);
    v13 = 0;
    if ( !*((_BYTE *)result + 12) )
      goto LABEL_15;
    if ( *(_BYTE *)v24 & 0x10 )
    {
LABEL_14:
      v13 = v5;
      v4 = 0;
      if ( !v5 )
        goto LABEL_15;
LABEL_36:
      if ( !v25 )
      {
        result = *(_DWORD **)(v3 + 20 * v4 + 40);
        if ( v24[3] > (signed int)result )
          return result;
        v14 = v13 - 1;
        v27 = v13;
        goto LABEL_17;
      }
      result = *(_DWORD **)(v3 + 20 * v4 + 40);
      if ( v26[3] > (signed int)result )
        return result;
      v14 = v13 - 1;
      v27 = v13;
LABEL_16:
      ++v13;
LABEL_17:
      if ( v13 <= 0xBF )
      {
        v15 = v27 - v4 - 1;
        if ( v27 != v4 )
        {
          v16 = 5 * v14;
          v28 = v3;
          v17 = -20 * v14;
          v18 = v3 + 4 * v16 + 28;
          v19 = 20 * v13;
          do
          {
            v20 = *(_DWORD *)v18;
            v21 = v18 + v17;
            --v15;
            v18 -= 20;
            *(_DWORD *)(v21 + v19) = v20;
            *(_DWORD *)(v21 + v19 + 4) = *(_DWORD *)(v18 + 24);
            *(_DWORD *)(v21 + v19 + 8) = *(_DWORD *)(v18 + 28);
            *(_DWORD *)(v21 + v19 + 12) = *(_DWORD *)(v18 + 32);
            *(_DWORD *)(v21 + v19 + 16) = *(_DWORD *)(v18 + 36);
          }
          while ( v15 != -1 );
          v3 = v28;
        }
        v22 = v3 + 20 * v4 + 16;
        *(_DWORD *)(v22 + 12) = *v24;
        *(_DWORD *)(v22 + 16) = v24[1];
        *(_DWORD *)(v22 + 20) = v24[2];
        *(_DWORD *)(v22 + 24) = v24[3];
        *(_DWORD *)(v22 + 28) = v24[4];
        result = (_DWORD *)(v27 + 1);
        *(_DWORD *)(v3 + 20) = v27 + 1;
        if ( v25 )
        {
          v23 = v3 + 4 * (5 * v4 + 5) + 16;
          *(_DWORD *)(v23 + 12) = *v26;
          *(_DWORD *)(v23 + 16) = v26[1];
          *(_DWORD *)(v23 + 20) = v26[2];
          *(_DWORD *)(v23 + 24) = v26[3];
          *(_DWORD *)(v23 + 28) = v26[4];
          result = (_DWORD *)(v27 + 2);
          *(_DWORD *)(v3 + 20) = v27 + 2;
        }
      }
      return result;
    }
    v8 = v24[2];
    goto LABEL_10;
  }
  v6 = *(_DWORD *)(a1 + 36);
  v7 = 0;
  v8 = v24[2];
  result = (_DWORD *)(a1 + 56);
  if ( v6 < v8 )
  {
    while ( ++v7 != v5 )
    {
      result += 5;
      v6 = *(result - 5);
      if ( v6 >= v8 )
        goto LABEL_26;
    }
    result = *(_DWORD **)(v3 + 4);
    v10 = v24;
    if ( !*((_BYTE *)result + 12) || *(_BYTE *)v24 & 0x10 )
    {
LABEL_34:
      result = *(_DWORD **)(v3 + 4 * (5 * v4 - 5) + 40);
      if ( v10[3] < (signed int)result )
        return result;
      v13 = *(_DWORD *)(v3 + 20);
      if ( v13 > v4 )
        goto LABEL_36;
LABEL_15:
      v14 = v13 - 1;
      v27 = v13;
      if ( !v25 )
        goto LABEL_17;
      goto LABEL_16;
    }
    goto LABEL_10;
  }
  v7 = 0;
LABEL_26:
  if ( v6 != v8 )
  {
    if ( !v25 || (result = v26, v6 > v26[2]) )
    {
      result = (_DWORD *)(5 * v7);
      if ( !(*(_BYTE *)(v3 + 20 * v7 + 28) & 8) )
      {
        result = *(_DWORD **)(v3 + 4);
        if ( !*((_BYTE *)result + 12) || *(_BYTE *)v24 & 0x10 )
          goto LABEL_12;
        v4 = v7;
LABEL_10:
        if ( v25 )
        {
          v11 = sub_6F779E90((int)result, (v26[2] + v8) / 2);
          v12 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(v3 + 16)
                                                              * (signed __int64)((v26[2] - v24[2]) / 2)) >> 32) >> 31)
                             + 0x8000)
              + *(_DWORD *)(v3 + 16) * (signed __int64)((v26[2] - v24[2]) / 2);
          LODWORD(v12) = (HIDWORD(v12) << 16) + ((unsigned int)v12 >> 16);
          HIDWORD(v12) = v11 - v12;
          result = (_DWORD *)(v11 + v12);
          v24[3] = HIDWORD(v12);
          v26[3] = result;
          v7 = v4;
        }
        else
        {
          result = (_DWORD *)sub_6F779E90((int)result, v8);
          v7 = v4;
          v24[3] = result;
        }
LABEL_12:
        if ( !v7 )
        {
          v5 = *(_DWORD *)(v3 + 20);
          goto LABEL_14;
        }
        v10 = v24;
        v4 = v7;
        goto LABEL_34;
      }
    }
  }
  return result;
}
