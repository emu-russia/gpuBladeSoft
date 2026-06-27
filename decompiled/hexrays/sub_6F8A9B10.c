double __cdecl sub_6F8A9B10(_BYTE *a1, _DWORD *a2)
{
  char v2; // al@1
  int v4; // [sp+28h] [bp-24h]@1
  __int64 v5; // [sp+2Ch] [bp-20h]@1
  _TBYTE v6; // [sp+34h] [bp-18h]@1

  *(double *)&v6 = 0.0;
  v2 = sub_6F8A7F20(a1, a2, (int)&unk_6FB48A7C, &v4, (int)&v5);
  switch ( v2 & 7 )
  {
    case 1:
    case 5:
      WORD4(v6) = v4 + 16446;
      goto LABEL_3;
    case 2:
LABEL_3:
      *(_QWORD *)&v6 = v5;
      break;
    default:
      break;
    case 3:
      *(_DWORD *)((char *)&v6 + 6) = 2147450880;
      break;
    case 4:
      *(_DWORD *)((char *)&v6 + 6) = 2147467264;
      break;
  }
  if ( v2 & 8 )
    WORD4(v6) |= 0x8000u;
  return *(double *)&v6;
}
