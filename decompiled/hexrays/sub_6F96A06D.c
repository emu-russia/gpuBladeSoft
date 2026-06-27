int __usercall sub_6F96A06D@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5)
{
  int v5; // esi@1
  int v6; // ebx@1
  int v7; // edi@1
  int v8; // eax@8
  int v9; // ecx@8
  int v10; // ebp@8
  int v11; // edx@8
  int v12; // ebp@8
  int result; // eax@10
  int v14; // edi@19
  int v15; // ebp@24
  signed int v16; // ebx@24
  int v17; // edx@24
  int v18; // ebp@24
  int v19; // ebp@36
  int v20; // edx@36
  int v21; // [sp+4h] [bp-24h]@1
  int v22; // [sp+8h] [bp-20h]@8
  int v23; // [sp+Ch] [bp-1Ch]@8
  int v24; // [sp+10h] [bp-18h]@8
  int v25; // [sp+14h] [bp-14h]@1

  v5 = a3;
  v6 = 64;
  v7 = *(_DWORD *)(a1 + 2984);
  v21 = a2;
  v25 = *(_DWORD *)(a1 + 2984) & 4;
  if ( !(v7 & 4) )
  {
    if ( *(_BYTE *)(a2 + 12) & 1 && *(_BYTE *)(a3 + 12) & 1 )
    {
      v6 = 55;
      if ( a5 != 1 )
        v6 = 49;
    }
    else
    {
      v6 = 2 * (a5 == 1) + 59;
    }
  }
  v22 = *(_DWORD *)(a3 + 4);
  v23 = *(_DWORD *)(a2 + 4);
  v8 = sub_6F969F5E(v7, *(_DWORD *)(a1 + 2988), a5, v22 - v23);
  v9 = v8;
  v8 /= 2;
  v10 = a4 + (v23 + v22) / 2 - v8;
  v24 = a4 + (v23 + v22) / 2 - v8;
  v11 = ((_BYTE)v9 + (_BYTE)v10) & 0x3F;
  v12 = v10 & 0x3F;
  if ( !v12 || !v11 )
    goto LABEL_39;
  result = 64 - v12;
  if ( v6 < v9 )
  {
    if ( v6 <= 63 && (v6 <= v12 || v6 <= result || v6 <= 64 - v11 || v6 <= v11) )
      goto LABEL_39;
    v14 = v9 & 0x3F;
    if ( v14 > 31 )
    {
      v14 = 64 - v6;
    }
    else if ( result <= v14 || v11 <= v14 )
    {
      goto LABEL_39;
    }
    v15 = v6;
    v16 = v6 - v11;
    v17 = v11 - v14;
    v18 = v15 - result;
    result -= v14;
    if ( v18 <= result )
      result = -v18;
    if ( v16 >= v17 )
      v16 = -v17;
    if ( abs(result) > (v16 ^ (v16 >> 31)) - (v16 >> 31) )
      result = v16;
    goto LABEL_30;
  }
  if ( v9 <= v11 )
  {
LABEL_39:
    result = 0;
LABEL_40:
    if ( v25 )
      goto LABEL_36;
    goto LABEL_32;
  }
  if ( v11 < result )
  {
    result = -v11;
    goto LABEL_40;
  }
LABEL_30:
  if ( v25 )
    goto LABEL_36;
  if ( result > 14 )
  {
    result = 14;
    goto LABEL_36;
  }
LABEL_32:
  if ( result < -14 )
    result = -14;
LABEL_36:
  v19 = result + v24;
  v20 = v9 + result + v24;
  if ( v22 <= v23 )
  {
    *(_DWORD *)(v21 + 8) = v20;
    *(_DWORD *)(v5 + 8) = v19;
  }
  else
  {
    *(_DWORD *)(v21 + 8) = v19;
    *(_DWORD *)(v5 + 8) = v20;
  }
  return result;
}
