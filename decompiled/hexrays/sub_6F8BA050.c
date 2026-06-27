signed int __thiscall sub_6F8BA050(int this, void *a2, size_t a3)
{
  int v3; // ebx@1
  signed int result; // eax@1
  signed int v5; // edx@1

  v3 = this;
  result = fread(a2, 1u, a3, *(FILE **)(this + 32));
  v5 = -1;
  if ( result > 0 )
    v5 = *((char *)a2 + result - 1);
  *(_DWORD *)(v3 + 36) = v5;
  return result;
}
