int __usercall sub_6F8ACC20@<eax>(int a1@<eax>, _TBYTE a2)
{
  int v2; // ebx@1
  __int16 v4; // fps@1
  __int16 v5; // fps@2
  unsigned int v9; // esi@8
  signed int v10; // eax@8
  int v11; // edi@8
  signed __int16 v12; // dx@9
  unsigned int v13; // ebp@11
  int v14; // edi@14
  unsigned int v15; // esi@14
  int v16; // ecx@17
  signed __int64 v17; // rax@17
  unsigned __int64 v18; // rax@21
  int v19; // ecx@23
  unsigned __int64 v20; // rax@23
  char *v21; // ebp@28
  unsigned __int64 v22; // rdi@28
  char v23; // dl@29
  char v24; // al@31
  unsigned int v25; // eax@34
  int v26; // edx@35
  char *v28; // eax@46
  int v29; // edx@48
  int v30; // eax@48
  int v31; // edi@50
  int v32; // ecx@50
  signed int v33; // esi@51
  int v34; // eax@54
  int v35; // eax@60
  int v36; // eax@63
  int v37; // eax@69
  int v38; // eax@73
  int v39; // edx@81
  signed __int16 v40; // bx@82
  int v41; // eax@93
  char *v42; // [sp+0h] [bp-7Ch]@28
  signed __int16 v43; // [sp+4h] [bp-78h]@5
  int v44; // [sp+4h] [bp-78h]@81
  unsigned __int64 v45; // [sp+8h] [bp-74h]@5
  unsigned int v46; // [sp+8h] [bp-74h]@50
  int v47; // [sp+8h] [bp-74h]@81
  int v48; // [sp+10h] [bp-6Ch]@12
  int v49; // [sp+14h] [bp-68h]@47
  unsigned __int16 v50; // [sp+1Ah] [bp-62h]@80
  __int16 v51; // [sp+28h] [bp-54h]@0
  __int16 v52; // [sp+36h] [bp-46h]@66
  _TBYTE v53; // [sp+38h] [bp-44h]@1
  char v54; // [sp+48h] [bp-34h]@28
  char v55; // [sp+49h] [bp-33h]@46

  v2 = a1;
  _ST7 = *(double *)&a2;
  *(double *)&v53 = *(double *)&a2;
  __asm { fxam }
  if ( (v4 & 0x4500) == 256 )
    return sub_6F8ABAF0(0, (int)"NaN", a1);
  if ( v51 < 0 )
    *(_DWORD *)(a1 + 4) |= 0x80u;
  __asm { fxam }
  if ( (v5 & 0x4500) == 1280 )
    return sub_6F8ABAF0(v51 & 0x8000, (int)"Inf", a1);
  v43 = v51 & 0x7FFF;
  v45 = *(_QWORD *)&v53;
  if ( v51 & 0x7FFF )
  {
    v13 = *(_DWORD *)(a1 + 12);
    v43 -= 0x3FFF;
    if ( v13 <= 0xE )
    {
      v14 = DWORD1(v53);
      v15 = LODWORD(v53);
      if ( SDWORD1(v53) < 0 )
      {
LABEL_17:
        v16 = 4 * (14 - v13);
        v17 = 4i64 << (v16 & 0x1F);
        if ( v16 & 0x20 )
          HIDWORD(v17) = 4 << v16;
        if ( v16 & 0x20 )
          LODWORD(v17) = 0;
        v18 = (v45 >> 1) + v17;
        if ( SHIDWORD(v18) < 0 )
          ++v43;
        else
          v18 *= 2i64;
        v19 = 4 * (15 - v13);
        v20 = v18 >> (v19 & 0x1F);
        if ( v19 & 0x20 )
          LODWORD(v20) = HIDWORD(v20);
        if ( v19 & 0x20 )
          HIDWORD(v20) = 0;
        v45 = v20;
        v48 = *(_DWORD *)(v2 + 4);
        goto LABEL_28;
      }
      do
      {
LABEL_15:
        v14 = __PAIR__((unsigned int)v14, v15) >> 31;
        v15 *= 2;
      }
      while ( v14 >= 0 );
      v45 = __PAIR__(v14, v15);
      goto LABEL_17;
    }
    v48 = *(_DWORD *)(a1 + 4);
    if ( *(_QWORD *)&v53 )
      goto LABEL_28;
LABEL_44:
    v42 = &v54;
    goto LABEL_45;
  }
  if ( !*(_QWORD *)&v53 )
  {
    v13 = *(_DWORD *)(a1 + 12);
    if ( v13 <= 0xE )
    {
      v14 = DWORD1(v53);
      v15 = LODWORD(v53);
      goto LABEL_15;
    }
    v48 = *(_DWORD *)(a1 + 4);
    goto LABEL_44;
  }
  if ( SDWORD1(v53) < 0 )
  {
    v43 = -16382;
  }
  else
  {
    v9 = LODWORD(v53);
    v10 = -16383;
    v11 = DWORD1(v53);
    do
    {
      v11 = __PAIR__((unsigned int)v11, v9) >> 31;
      v12 = v10;
      v9 *= 2;
      --v10;
    }
    while ( v11 >= 0 );
    v43 = v12;
    v45 = __PAIR__(v11, v9);
  }
  v13 = *(_DWORD *)(v2 + 12);
  if ( v13 <= 0xE )
    goto LABEL_17;
  v48 = *(_DWORD *)(v2 + 4);
LABEL_28:
  v42 = &v54;
  v21 = &v54;
  v22 = __PAIR__(v45, HIDWORD(v45));
  do
  {
    v25 = BYTE4(v22) & 0xF;
    if ( HIDWORD(v22) ^ v25 | (unsigned int)v22 )
    {
      v26 = *(_DWORD *)(v2 + 12);
      HIDWORD(v22) = __PAIR__(v22, HIDWORD(v22)) >> 4;
      LODWORD(v22) = (unsigned int)v22 >> 4;
      if ( v26 > 0 )
        *(_DWORD *)(v2 + 12) = v26 - 1;
    }
    else
    {
      if ( v21 > &v54 || v48 & 0x800 || *(_DWORD *)(v2 + 12) > 0 )
        *v21++ = 46;
      v50 = v43 - 1;
      if ( (unsigned int)v22 | HIDWORD(v22) ^ 1 )
      {
        v44 = BYTE4(v22) & 0xF;
        v39 = v50;
        v47 = v2;
        do
        {
          HIDWORD(v22) = __PAIR__(v22, HIDWORD(v22)) >> 1;
          LODWORD(v22) = (unsigned int)v22 >> 1;
          v40 = v39--;
        }
        while ( HIDWORD(v22) ^ 1 | (unsigned int)v22 );
        v25 = v44;
        v43 = v40;
        v22 = 0i64;
        v2 = v47;
      }
      else
      {
        v22 = 0i64;
      }
    }
    if ( v25 )
    {
      v23 = v25;
      if ( v25 <= 9 )
LABEL_31:
        v24 = v23 + 48;
      else
        v24 = v48 & 0x20 | (v25 + 55);
      *v21++ = v24;
      continue;
    }
    v23 = 0;
    if ( v21 > &v54 || *(_DWORD *)(v2 + 12) >= 0 )
      goto LABEL_31;
  }
  while ( v22 );
  if ( v21 != &v54 )
  {
    v49 = *(_DWORD *)(v2 + 8);
    if ( v49 <= 0 )
      goto LABEL_86;
LABEL_48:
    v29 = *(_DWORD *)(v2 + 12);
    v30 = v21 - v42;
    if ( v29 > 0 )
      v30 = v21 - v42 + v29;
    v46 = v43;
    v31 = v30 + ((v48 & 0x1C0) != 0) + 5;
    v32 = v43 / 10;
    if ( v32 )
    {
      do
      {
        LOWORD(v33) = ++v31 + 2 - (v30 + ((v48 & 0x1C0) != 0) + 5);
        v32 /= 10;
      }
      while ( v32 );
      v33 = (signed __int16)v33;
    }
    else
    {
      v31 = v30 + ((v48 & 0x1C0) != 0) + 5;
      v33 = 2;
    }
    if ( v49 <= v31 )
    {
      *(_DWORD *)(v2 + 8) = -1;
    }
    else
    {
      v34 = v49 - v31;
      if ( v48 & 0x600 )
      {
        *(_DWORD *)(v2 + 8) = v34;
      }
      else
      {
        *(_DWORD *)(v2 + 8) = v34 - 1;
        if ( v34 > 0 )
        {
          do
          {
            sub_6F8AB850(32, v2);
            v41 = *(_DWORD *)(v2 + 8);
            *(_DWORD *)(v2 + 8) = v41 - 1;
          }
          while ( v41 > 0 );
          v48 = *(_DWORD *)(v2 + 4);
        }
      }
    }
    if ( !(v48 & 0x80) )
      goto LABEL_57;
LABEL_87:
    sub_6F8AB850(45, v2);
    goto LABEL_60;
  }
LABEL_45:
  if ( *(_DWORD *)(v2 + 12) > 0 || (v28 = v42, v48 & 0x800) )
  {
    v54 = 46;
    v28 = &v55;
  }
  v21 = v28 + 1;
  *v28 = 48;
  v49 = *(_DWORD *)(v2 + 8);
  if ( v49 > 0 )
    goto LABEL_48;
LABEL_86:
  v33 = 2;
  v46 = v43;
  if ( v48 & 0x80 )
    goto LABEL_87;
LABEL_57:
  if ( v48 & 0x100 )
  {
    sub_6F8AB850(43, v2);
  }
  else if ( v48 & 0x40 )
  {
    sub_6F8AB850(32, v2);
  }
LABEL_60:
  sub_6F8AB850(48, v2);
  sub_6F8AB850(*(_DWORD *)(v2 + 4) & 0x20 | 0x58, v2);
  v35 = *(_DWORD *)(v2 + 8);
  if ( v35 > 0 && *(_BYTE *)(v2 + 5) & 2 )
  {
    *(_DWORD *)(v2 + 8) = v35 - 1;
    do
    {
      sub_6F8AB850(48, v2);
      v36 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 8) = v36 - 1;
    }
    while ( v36 > 0 );
  }
  if ( v21 > v42 )
  {
    do
    {
      v37 = *--v21;
      if ( v37 == 46 )
      {
        sub_6F8ABB90(v2);
      }
      else if ( v37 == 44 )
      {
        v52 = *(_WORD *)(v2 + 28);
        if ( v52 )
          sub_6F8AB8B0((int)&v52, 1, v2);
      }
      else
      {
        sub_6F8AB850(v37, v2);
      }
    }
    while ( v21 != v42 );
  }
  while ( 1 )
  {
    v38 = *(_DWORD *)(v2 + 12);
    *(_DWORD *)(v2 + 12) = v38 - 1;
    if ( v38 <= 0 )
      break;
    sub_6F8AB850(48, v2);
  }
  sub_6F8AB850(*(_DWORD *)(v2 + 4) & 0x20 | 0x50, v2);
  *(_DWORD *)(v2 + 8) += v33;
  *(_DWORD *)(v2 + 4) |= 0x1C0u;
  return sub_6F8AC0F0(v46, (unsigned __int64)(signed int)v46 >> 32, v2);
}
