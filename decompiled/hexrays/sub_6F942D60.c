int __thiscall sub_6F942D60(void *this)
{
  int v1; // eax@1
  int v2; // esi@1
  int v3; // ebx@1
  int v4; // edx@2
  int v5; // edi@2
  int v6; // edi@3
  int result; // eax@3
  signed __int64 v8; // rax@4
  int v9; // ecx@4
  int v10; // ebx@4
  int v11; // ecx@5

  v1 = *((_DWORD *)this + 2);
  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)(*(_DWORD *)this + 36);
  if ( (v1 & *((_DWORD *)this + 3)) != -1 )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = *((_DWORD *)this + 4);
    *(_DWORD *)(v2 + 4) = v3 + 2 * v1;
    *(_DWORD *)(v2 + 8) = v3 + 2 * v5;
    *(_DWORD *)(v2 + 12) = v3 + 2 * v4;
  }
  v6 = *((_DWORD *)this + 8);
  result = v6 & *((_DWORD *)this + 9);
  if ( result != -1 )
  {
    v8 = *((_QWORD *)this + 5);
    v9 = v3 + 2 * *((_DWORD *)this + 12);
    v10 = v3 + 2 * v6;
    *(_DWORD *)(v2 + 24) = v9;
    *(_DWORD *)(v2 + 20) = v10;
    *(_DWORD *)(v2 + 16) = v10;
    if ( v8 > 0x7FFFFFFF )
    {
      v11 = v10 - 2;
      do
      {
        v10 = v11;
        v8 -= 0x7FFFFFFFi64;
        --HIDWORD(v8);
        v11 -= 2;
      }
      while ( v8 > 0x7FFFFFFF );
    }
    result = v10 + 2 * v8;
    *(_DWORD *)(v2 + 20) = result;
  }
  return result;
}
