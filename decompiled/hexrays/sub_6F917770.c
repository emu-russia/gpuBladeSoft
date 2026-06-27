void *__thiscall sub_6F917770(void *this, int a2)
{
  void *v2; // ebx@1
  int v3; // eax@1
  int v4; // eax@1
  void *result; // eax@3
  int v6; // [sp+20h] [bp-1Ch]@2
  int v7; // [sp+24h] [bp-18h]@2

  v2 = this;
  *(_WORD *)((char *)this + 69) = 0;
  v3 = *((_DWORD *)this + 15);
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 1) = v3;
  *((_DWORD *)this + 2) = v3;
  *((_DWORD *)this + 3) = v3;
  v4 = *((_DWORD *)this + 12);
  *((_DWORD *)this + 11) = a2;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 13) = v4;
  *((_DWORD *)this + 14) = v4;
  if ( a2 & 2
    && ((*(void (__thiscall **)(int *, void *, _DWORD, _DWORD, signed int, int))(*(_DWORD *)this + 16))(
          &v6,
          this,
          0,
          0,
          2,
          a2),
        (v6 & v7) == -1) )
  {
    sub_6F917A70(v2);
    result = 0;
  }
  else
  {
    result = v2;
  }
  return result;
}
