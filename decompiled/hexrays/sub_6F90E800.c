signed int __thiscall sub_6F90E800(FILE **this)
{
  FILE **v1; // ebp@1
  FILE **v2; // eax@1
  int v3; // ebx@1
  signed int result; // eax@1
  int v5; // esi@4
  int v6; // edi@4
  FILE **v7; // eax@4
  __int64 v8; // rax@4
  signed __int64 v9; // kr00_8@4
  char v10; // [sp+18h] [bp-54h]@1
  __int16 v11; // [sp+1Eh] [bp-4Eh]@2
  int v12; // [sp+30h] [bp-3Ch]@4
  int v13; // [sp+34h] [bp-38h]@4

  v1 = this;
  v2 = sub_6F90E350(this);
  v3 = fstat64(v2, &v10);
  result = 0;
  if ( !v3 )
  {
    result = 0;
    if ( (v11 & 0xF000) == -32768 )
    {
      v5 = v12;
      v6 = v13;
      v7 = sub_6F90E350(v1);
      LODWORD(v8) = j__lseeki64((int)v7, 0, 0, 1);
      v9 = __PAIR__(v6, v5) - v8;
      result = v5 - v8;
      if ( v9 > 0x7FFFFFFF )
        result = 0x7FFFFFFF;
    }
  }
  return result;
}
