int sub_6F71EB20()
{
  signed int i; // ebx@9
  __int16 v1; // ax@10
  int v3; // [sp+14h] [bp-18h]@4
  int v4; // [sp+18h] [bp-14h]@3
  int v5; // [sp+1Ch] [bp-10h]@3

  nullsub_10();
  if ( dword_6FD400E8 && !dword_6FD400D0 )
  {
    v4 = 1;
    v5 = 0;
    sub_6F681470((int)&v4);
  }
  v3 = 1;
  v4 = 0;
  if ( dword_6FBB5098 )
  {
    sub_6F88DA60(dword_6FD400E4, (char *)&v3, 4u);
    sub_6F88DA60(dword_6FD400E4, (char *)&v4, 4u);
  }
  v3 = 1;
  v4 = 0;
  if ( dword_6FD400DC )
  {
    sub_6F88DA60(dword_6FD400D8, (char *)&v3, 4u);
    sub_6F88DA60(dword_6FD400D8, (char *)&v4, 4u);
  }
  if ( !(byte_6FBB979F & 8) )
    return dword_6FBB97A0;
  for ( i = 2; ; i = 1 )
  {
    v1 = HIWORD(dword_6FD40130);
    if ( SHIWORD(dword_6FD40130) >= SHIWORD(dword_6FD40138) )
      goto LABEL_13;
    if ( (signed __int16)dword_6FD40130 < (signed __int16)dword_6FD40138 )
    {
      LOWORD(v4) = dword_6FBB51E4(
                     (signed __int16)dword_6FD40134 + (signed __int16)dword_6FD40130,
                     SHIWORD(dword_6FD40134) + SHIWORD(dword_6FD40130));
      LOWORD(dword_6FD40130) = dword_6FD40130 + 1;
      if ( (signed __int16)dword_6FD40130 < (signed __int16)dword_6FD40138 )
        goto LABEL_13;
      v1 = HIWORD(dword_6FD40130);
    }
    LOWORD(dword_6FD40130) = 0;
    HIWORD(dword_6FD40130) = v1 + 1;
LABEL_13:
    sub_6F75A7B0(dword_6FD40978, &v4, 2);
    if ( --dword_6FD4013C <= 0 )
      break;
    if ( i == 1 )
      goto LABEL_15;
  }
  nullsub_10();
  byte_6FBB979F &= 0xF7u;
LABEL_15:
  sub_6F75A8B0(dword_6FD40978, &dword_6FBB97A0, 4);
  return dword_6FBB97A0;
}
