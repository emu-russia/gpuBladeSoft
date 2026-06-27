void *__cdecl sub_6F752AB0(int a1, void *a2, size_t a3)
{
  char *v3; // ebx@1
  void *result; // eax@1

  v3 = (char *)Src + a3;
  result = memcpy(a2, Src, a3);
  Src = v3;
  return result;
}
