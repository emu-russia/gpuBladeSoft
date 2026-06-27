int sub_6F72CAF0()
{
  int result; // eax@1
  double v1; // st7@5
  double v2; // st6@8
  double v3; // [sp+18h] [bp-34h]@8
  double v4; // [sp+20h] [bp-2Ch]@0
  double v5; // [sp+28h] [bp-24h]@7

  for ( result = (unsigned __int8)byte_6FD40100; !byte_6FD40100; result = (unsigned __int8)byte_6FD40100 )
  {
    if ( dword_6FBB52EC >= 0 )
    {
      if ( dword_6FBB52EC <= 1 )
      {
        if ( unk_6FBB979E & 0x10 )
        {
          v5 = 0.02;
          v4 = 50.0;
        }
        else
        {
          v5 = 0.01668335001668335;
          v4 = 59.94;
        }
        goto LABEL_8;
      }
      if ( dword_6FBB52EC == 2 )
      {
        v1 = 50.0;
        if ( !(unk_6FBB979E & 0x10) )
          v1 = 59.94;
        v4 = v1 * ((double)dword_6FBB52F0 * 0.01);
        v5 = 1.0 / v4;
        goto LABEL_8;
      }
    }
    v5 = 1.0 / v4;
LABEL_8:
    v3 = (double)((signed __int64)(sub_6F7619B0(dword_6FD40974) * v4) + 1) * v5;
    v2 = v3 - sub_6F7619B0(dword_6FD40974);
    if ( v2 > -0.0001 )
      sub_6F760540(v2 + 0.0001);
    while ( v3 > sub_6F7619B0(dword_6FD40974) )
      ;
    if ( byte_70055EC0 )
      ++qword_70057F20;
    byte_70055EC0 = 1;
  }
  return result;
}
