int __usercall sub_6F7544E0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebp@1
  int v4; // esi@1
  int v5; // ebx@1
  unsigned int v6; // edi@1
  unsigned int v7; // edx@2
  unsigned int v8; // eax@5
  _BYTE *v9; // ecx@8
  int result; // eax@10
  int v11; // ecx@15
  int v12; // edx@15
  int v13; // eax@15
  _BYTE *v14; // [sp+10h] [bp-2Ch]@1
  size_t v15; // [sp+14h] [bp-28h]@1
  size_t v16; // [sp+18h] [bp-24h]@1
  const void *v17; // [sp+1Ch] [bp-20h]@3

  v3 = a2 + 8;
  v4 = a1;
  v5 = a2;
  v15 = *(_DWORD *)(a3 + 4);
  v16 = *(_DWORD *)(a2 + 4);
  v6 = v15 + v16;
  v14 = *(_BYTE **)a2;
  if ( a2 + 8 == *(_DWORD *)a2 )
    v7 = 15;
  else
    v7 = *(_DWORD *)(a2 + 8);
  v17 = *(const void **)a3;
  if ( v6 <= v7 )
  {
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        v14[v16] = *(_BYTE *)v17;
        v14 = *(_BYTE **)v5;
      }
      else
      {
        memcpy(&v14[v16], v17, v15);
        v14 = *(_BYTE **)v5;
      }
    }
  }
  else
  {
    if ( *(_DWORD *)a3 == a3 + 8 )
      v8 = 15;
    else
      v8 = *(_DWORD *)(a3 + 8);
    if ( v6 <= v8 )
    {
      v5 = sub_6F93A0E0(a3, 0, 0, v14, v16);
      v3 = v5 + 8;
      *(_DWORD *)v4 = v4 + 8;
      v9 = *(_BYTE **)v5;
      if ( v5 + 8 != *(_DWORD *)v5 )
        goto LABEL_9;
LABEL_15:
      v11 = *(_DWORD *)(v5 + 12);
      v12 = *(_DWORD *)(v5 + 16);
      v13 = *(_DWORD *)(v5 + 20);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v5 + 8);
      *(_DWORD *)(v4 + 12) = v11;
      *(_DWORD *)(v4 + 16) = v12;
      *(_DWORD *)(v4 + 20) = v13;
      goto LABEL_10;
    }
    sub_6F93C2B0(v5, v16, 0, v17, v15);
    v14 = *(_BYTE **)v5;
  }
  *(_DWORD *)(v5 + 4) = v6;
  v14[v6] = 0;
  *(_DWORD *)v4 = v4 + 8;
  v9 = *(_BYTE **)v5;
  if ( v3 == *(_DWORD *)v5 )
    goto LABEL_15;
LABEL_9:
  *(_DWORD *)v4 = v9;
  *(_DWORD *)(v4 + 8) = *(_DWORD *)(v5 + 8);
LABEL_10:
  result = v4;
  *(_DWORD *)(v4 + 4) = *(_DWORD *)(v5 + 4);
  *(_DWORD *)v5 = v3;
  *(_DWORD *)(v5 + 4) = 0;
  *(_BYTE *)(v5 + 8) = 0;
  return result;
}
