int sub_6F728FF0()
{
  int result; // eax@11
  int v1; // [sp+14h] [bp-18h]@4
  int v2; // [sp+18h] [bp-14h]@3
  int v3; // [sp+1Ch] [bp-10h]@3

  if ( dword_6FD400E8 && !dword_6FD400D0 )
  {
    v2 = 4;
    v3 = 0;
    sub_6F681470((int)&v2);
  }
  v1 = 4;
  v2 = 0;
  if ( dword_6FBB5098 )
  {
    sub_6F88DA60(dword_6FD400E4, (char *)&v1, 4u);
    sub_6F88DA60(dword_6FD400E4, (char *)&v2, 4u);
  }
  v1 = 4;
  v2 = 0;
  if ( dword_6FD400DC )
  {
    sub_6F88DA60(dword_6FD400D8, (char *)&v1, 4u);
    sub_6F88DA60(dword_6FD400D8, (char *)&v2, 4u);
  }
  if ( dword_6FD400D4 )
  {
    if ( --dword_6FD400D4 & 1 )
      byte_6FBB979F &= 0xEBu;
    else
      byte_6FBB979F |= 0x14u;
  }
  nullsub_10();
  result = *(_DWORD *)&word_6FBB979C & 0x7FFFFFFF;
  if ( !dword_6FD40994 )
    result = *(_DWORD *)&word_6FBB979C;
  return result;
}
