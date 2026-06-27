double __cdecl sub_6F8A2040(int a1, int a2)
{
  char v2; // al@1
  float v3; // edx@2
  float v5; // [sp+38h] [bp-14h]@1
  int v6; // [sp+3Ch] [bp-10h]@1

  v2 = sub_6F8A7F20((_BYTE *)a1, (_DWORD *)a2, (int)&unk_6FB48A60, &v6, (int)&v5);
  switch ( v2 & 7 )
  {
    case 3:
      v3 = 3.4028237e38/*+Inf*/;
      break;
    case 2:
      v3 = v5;
      break;
    case 1:
    case 5:
      LODWORD(v3) = LODWORD(v5) & 0x7FFFFF | ((v6 + 150) << 23);
      break;
    case 4:
      v3 = 5.1042355e38/*NaN*/;
      break;
    default:
      v3 = 0.0;
      break;
  }
  if ( v2 & 8 )
    LODWORD(v3) |= 0x80000000;
  return v3;
}
