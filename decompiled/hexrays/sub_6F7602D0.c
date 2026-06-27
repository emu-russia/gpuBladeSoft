void *sub_6F7602D0()
{
  char *v0; // eax@1
  int v2; // [sp+10h] [bp-1Ch]@1
  int v3; // [sp+14h] [bp-18h]@1
  int v4; // [sp+18h] [bp-14h]@1
  int v5; // [sp+1Ch] [bp-10h]@1

  v2 = 1465662019;
  v3 = 1329876553;
  v4 = 1415336791;
  v5 = 7368037;
  v0 = getenv((const char *)&unk_6FB55160);
  if ( !v0 )
    v0 = (char *)&v2;
  strncpy((char *)&unk_703614E0, v0, 0xFFFu);
  byte_703624DF = 0;
  return &unk_703614E0;
}
