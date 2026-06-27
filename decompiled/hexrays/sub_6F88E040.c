int __usercall sub_6F88E040@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  unsigned int v2; // ebx@1
  unsigned int v3; // edx@1
  int v4; // esi@1
  int v5; // ebp@1
  unsigned int v6; // edi@1
  unsigned int v7; // eax@1
  int v8; // ecx@1
  unsigned int v9; // edx@3
  int v10; // ebx@5
  int v11; // esi@10
  int v12; // eax@14
  unsigned int v13; // esi@14
  int result; // eax@28
  unsigned int v15; // [sp+0h] [bp-38h]@1
  int v16; // [sp+0h] [bp-38h]@10
  unsigned int v17; // [sp+4h] [bp-34h]@1
  int v18; // [sp+8h] [bp-30h]@3
  int v19; // [sp+Ch] [bp-2Ch]@3
  char v20; // [sp+10h] [bp-28h]@3
  char v21; // [sp+12h] [bp-26h]@3
  int v22; // [sp+14h] [bp-24h]@1
  unsigned int v23; // [sp+18h] [bp-20h]@1
  int v24; // [sp+1Ch] [bp-1Ch]@1
  unsigned int v25; // [sp+20h] [bp-18h]@5
  unsigned int v26; // [sp+24h] [bp-14h]@3

  v2 = *(_DWORD *)(a1 + 108);
  v15 = a2;
  v3 = *(_DWORD *)(a1 + 144);
  v4 = *(_DWORD *)(a1 + 44);
  v5 = *(_DWORD *)(a1 + 56);
  v24 = a1;
  v6 = *(_DWORD *)(a1 + 124);
  v7 = *(_DWORD *)(a1 + 120);
  v23 = v3;
  v22 = v5 + v2;
  v17 = 0;
  v8 = v7;
  if ( v2 > v4 - 262 )
    v17 = v2 + 262 - v4;
  v26 = v5 + v2 + 258;
  v18 = *(_DWORD *)(v24 + 64);
  v19 = *(_DWORD *)(v24 + 52);
  v21 = *(_BYTE *)(v22 + v7 - 1);
  v9 = v15;
  v20 = *(_BYTE *)(v22 + v7);
  if ( v7 >= *(_DWORD *)(v24 + 140) )
    v6 >>= 2;
  v10 = v23;
  v25 = *(_DWORD *)(v24 + 116);
  if ( v23 > *(_DWORD *)(v24 + 116) )
    v10 = *(_DWORD *)(v24 + 116);
  do
  {
    v11 = v8;
    v16 = v5 + v9;
    if ( *(_BYTE *)(v5 + v9 + v8) == v20
      && *(_BYTE *)(v16 + v8 - 1) == v21
      && *(_BYTE *)v16 == *(_BYTE *)v22
      && *(_BYTE *)(v16 + 1) == *(_BYTE *)(v22 + 1) )
    {
      v12 = v16 + 2;
      v13 = v22 + 2;
      while ( 1 )
      {
        if ( *(_BYTE *)(v13 + 1) != *(_BYTE *)(v12 + 1) )
        {
          ++v13;
          goto LABEL_25;
        }
        if ( *(_BYTE *)(v13 + 2) != *(_BYTE *)(v12 + 2) )
          break;
        if ( *(_BYTE *)(v13 + 3) != *(_BYTE *)(v12 + 3) )
        {
          v13 += 3;
          goto LABEL_25;
        }
        if ( *(_BYTE *)(v13 + 4) != *(_BYTE *)(v12 + 4) )
        {
          v13 += 4;
          goto LABEL_25;
        }
        if ( *(_BYTE *)(v13 + 5) != *(_BYTE *)(v12 + 5) )
        {
          v13 += 5;
          goto LABEL_25;
        }
        if ( *(_BYTE *)(v13 + 6) != *(_BYTE *)(v12 + 6) )
        {
          v13 += 6;
          goto LABEL_25;
        }
        if ( *(_BYTE *)(v13 + 7) != *(_BYTE *)(v12 + 7) )
        {
          v13 += 7;
          goto LABEL_25;
        }
        v12 += 8;
        v13 += 8;
        if ( *(_BYTE *)v13 != *(_BYTE *)v12 || v26 <= v13 )
          goto LABEL_25;
      }
      v13 += 2;
LABEL_25:
      v11 = v13 - v26 + 258;
      v22 = v26 - 258;
      if ( v8 >= v11 )
      {
        v11 = v8;
        v20 = *(_BYTE *)(v5 + v9 + v8);
        v21 = *(_BYTE *)(v16 + v8 - 1);
      }
      else
      {
        *(_DWORD *)(v24 + 112) = v9;
        if ( v10 <= v11 )
          break;
        v8 = v11;
        v21 = *(_BYTE *)(v22 + v11 - 1);
        v20 = *(_BYTE *)(v26 + v11 - 258);
      }
    }
    v9 = *(_WORD *)(v18 + 2 * (v19 & v9));
    if ( v17 >= v9 )
      break;
    --v6;
  }
  while ( v6 );
  result = v25;
  if ( v11 <= v25 )
    result = v11;
  return result;
}
